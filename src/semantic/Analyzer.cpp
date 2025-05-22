#include "Analyzer.h"

#include <format>
#include <ranges>

#include "SemObject.h"
#include "exception/NameError.h"
#include "exception/SyntaxError.h"
#include "exception/TypeError.h"

using namespace riddle;
using namespace std;

template<typename T>
shared_ptr<SemObject> toSNPtr(const shared_ptr<T> &ptr) {
    static_assert(is_base_of_v<SemObject, T>, "T must be derived from ExprNode");
    return dynamic_pointer_cast<SemObject>(ptr);
}

template<typename T>
constexpr auto cast(const auto &&ptr) {
    const auto &&result = dynamic_pointer_cast<T>(ptr);
    if (result == nullptr) {
        throw runtime_error("Cast Error");
    }
    return result;
};

template<typename T, typename... Arg>
constexpr auto make(Arg &&... args) {
    return toSNPtr(make_shared<T>(std::forward<Arg>(args)...));
};

const auto nilValue = toSNPtr(make_shared<SemValue>(getPrimitiveType("void")));

namespace riddle {
    void Analyzer::joinScope() {
        locals.emplace();
    }

    void Analyzer::leaveScope() {
        if (locals.empty())return;
        for (const auto &i: locals.top()) {
            const auto it = symbols.find(i);
            if (it == symbols.end() || it->second.empty()) {
                return;
            }
            it->second.pop();
        }
        locals.pop();
    }

    void Analyzer::addGlobalObject(const std::shared_ptr<SemObject> &object) {
        if (object == nullptr) {
            throw runtime_error("get a null pointer");
        }
        const auto &name = object->name;
        if (locals.top().contains(name)) {
            throw SyntaxError(format("name '{}' is already defined", name));
        }
        symbols[name].emplace(object);
        locals.top().emplace(name);
    }

    Analyzer::Analyzer() {
        joinScope();
        addGlobalObject(make_shared<SemType>("void", getPrimitiveType("void")));
        addGlobalObject(make_shared<SemType>("int", getPrimitiveType("int")));
        addGlobalObject(make_shared<SemType>("float", getPrimitiveType("float")));
    }

    Analyzer::~Analyzer() {
        leaveScope();
    }

    std::shared_ptr<SemObject> Analyzer::objVisit(ExprNode *node) {
        return cast<SemObject>(any_cast<shared_ptr<SemObject>>(visit(node)));
    }

    std::shared_ptr<SemObject> Analyzer::objVisit(const std::shared_ptr<ExprNode> &node) {
        return cast<SemObject>(any_cast<shared_ptr<SemObject>>(visit(node)));
    }

    std::any Analyzer::visitProgram(ProgramNode *node) {
        for (const auto &i: node->body) {
            visit(i);
        }
        return nilValue;
    }

    std::any Analyzer::visitFuncDecl(FuncDeclNode *node) {
        const auto returnType = cast<SemType>(objVisit(node->returnType));

        const auto obj = make_shared<SemFunction>(node->name, returnType->type);
        node->obj = obj;
        addGlobalObject(obj);

        joinScope();
        for (const auto &i: node->args) {
            visit(i);
        }
        visit(node->body);
        leaveScope();

        return toSNPtr(obj);
    }

    std::any Analyzer::visitBlock(BlockNode *node) {
        for (const auto &i: node->body) {
            visit(i);
        }
        return nilValue;
    }

    std::any Analyzer::visitFloat(FloatNode *node) {
        return make<SemValue>(getPrimitiveType("float"));
    }

    std::any Analyzer::visitInteger(IntegerNode *node) {
        return make<SemValue>(getPrimitiveType("int"));
    }

    std::any Analyzer::visitObject(ObjectNode *node) {
        const auto obj = symbols.find(node->name);
        if (obj == symbols.end()) {
            throw NameError(format("name '{}' is not defined", node->name));
        }
        node->obj = obj->second.top();
        return obj->second.top();
    }

    std::any Analyzer::visitVarDecl(VarDeclNode *node) {
        shared_ptr<TypeInfo> type = nullptr;
        shared_ptr<SemValue> value = nullptr;
        if (node->value != nullptr) {
            value = cast<SemValue>(objVisit(node->value));
        }
        if (node->type) {
            const auto obj = objVisit(node->type);
            const auto ty = std::dynamic_pointer_cast<SemType>(obj);
            type = ty->type;
        } else {
            type = value->type;
        }
        const auto obj = make_shared<SemVariable>(node->name, type);
        node->obj = obj;
        obj->isLocalVar = true;
        addGlobalObject(obj);
        return toSNPtr(obj);
    }

    std::any Analyzer::visitArgDecl(ArgDeclNode *node) {
        const auto type = cast<SemType>(objVisit(node->type));
        const auto obj = make_shared<SemVariable>(node->name, type->type);
        node->obj = obj;
        addGlobalObject(obj);
        return nilValue;
    }

    std::any Analyzer::visitReturn(ReturnNode *node) {
        if (node->value) {
            visit(node->value);
        }
        return nilValue;
    }

    std::any Analyzer::visitCall(CallNode *node) {
        const auto obj = objVisit(node->value);
        if (obj->getKind() != SemObject::Function) {
            throw TypeError(std::format("'{}' object is not callable", obj->name));
        }
        const auto func = dynamic_pointer_cast<SemFunction>(obj);
        for (const auto &i: node->args) {
            const auto rel = objVisit(i);
            const auto value = std::dynamic_pointer_cast<SemValue>(rel);
            if (value == nullptr) {
                throw TypeError(std::format("'{}' object not a value", value->name));
            }
        }
        return make<SemValue>(func->returnType);
    }

    std::any Analyzer::visitClassDecl(ClassDeclNode *node) {
        const auto typeinfo = make_shared<StructTypeInfo>(std::vector<std::shared_ptr<TypeInfo>>{});
        const auto obj = make_shared<SemClass>(node->name, typeinfo);
        node->obj = obj;
        addGlobalObject(obj);

        // member parser
        int index = 0;
        for (const auto &i: node->members) {
            const auto result = objVisit(i);
            if (const auto var = dynamic_pointer_cast<SemVariable>(result)) {
                obj->addMember(var, index++);
            } else {
                throw runtime_error("Result Not a Variable");
            }
        }

        // method parser
        for (const auto &i: node->methods) {
            const auto result = objVisit(i);
            if (const auto func = dynamic_pointer_cast<SemFunction>(result)) {
                obj->addMethod(func);
            } else {
                throw runtime_error("Result Not a Function");
            }
        }

        // create typeinfo
        const auto structType = obj->getStructType();
        structType->types.resize(index);
        for (const auto &[idx, var]: obj->members | views::values) {
            structType->types[idx] = var->type;
        }
        structType->theClass = obj;

        return toSNPtr(obj);
    }

    std::any Analyzer::visitMemberAccess(MemberAccessNode *node) {
        const auto obj = objVisit(node->left);
        const auto theClass = std::dynamic_pointer_cast<StructTypeInfo>(std::dynamic_pointer_cast<SemValue>(obj)->type);
        if (theClass == nullptr) {
            throw runtime_error("Left is not a class");
        }
        node->theClass = theClass->theClass.lock();
        const auto child = node->theClass->getMember(node->right);
        node->childObj = child;
        return toSNPtr(child);
    }
} // riddle
