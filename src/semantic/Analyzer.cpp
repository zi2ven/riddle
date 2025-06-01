#include "Analyzer.h"

#include <format>
#include <ranges>
#include <memory>

#include "Operators.h"
#include "SemObject.h"
#include "exception/SyntaxError.h"
#include "exception/TypeError.h"

using namespace riddle;
using namespace std;

template<typename T>
shared_ptr<SemObject> toSNPtr(const shared_ptr<T> &ptr) {
    static_assert(is_base_of_v<SemObject, T>, "T must be derived from ExprNode");
    return dynamic_pointer_cast<SemObject>(ptr);
}

template<class To, class From>
std::shared_ptr<To> cast(const std::shared_ptr<From> &ptr) {
    static_assert(std::is_base_of_v<SemObject, To>);
    auto result = std::dynamic_pointer_cast<To>(ptr);
    if (!result) throw std::runtime_error("Cast Error");
    return result;
}

template<typename T, typename... Arg>
constexpr auto make(Arg &&... args) {
    return toSNPtr(make_shared<T>(std::forward<Arg>(args)...));
};

namespace riddle {
    Analyzer::Analyzer() {
        symbols.joinScope();
        symbols.addObject(make_shared<SemType>("void", getPrimitiveType("void")));
        symbols.addObject(make_shared<SemType>("int", getPrimitiveType("int")));
        symbols.addObject(make_shared<SemType>("long", getPrimitiveType("long")));
        symbols.addObject(make_shared<SemType>("float", getPrimitiveType("float")));
        symbols.addObject(make_shared<SemType>("char", getPrimitiveType("char")));
        symbols.addObject(make_shared<SemType>("bool", getPrimitiveType("bool")));
    }

    Analyzer::~Analyzer() {
        symbols.leaveScope();
    }

    std::shared_ptr<SemObject> Analyzer::objVisit(ExprNode *node) {
        return cast<SemObject>(any_cast<shared_ptr<SemObject>>(visit(node)));
    }

    std::shared_ptr<SemObject> Analyzer::objVisit(const std::shared_ptr<ExprNode> &node) {
        return cast<SemObject>(any_cast<shared_ptr<SemObject>>(visit(node.get())));
    }

    std::any Analyzer::visitProgram(ProgramNode *node) {
        program = node;
        for (const auto &i: node->body) {
            visit(i);
        }
        return nilValue;
    }

    std::any Analyzer::visitFuncDecl(FuncDeclNode *node) {
        const auto returnType = cast<SemType>(objVisit(node->returnType));

        const auto obj = make_shared<SemFunction>(node->name, returnType->type);
        node->obj = obj;
        symbols.addObject(obj);

        symbols.joinScope();
        parent.push(obj);
        if (node->theClass) {
            const auto class_obj = new ObjectNode(node->theClass->name);
            program->nodes.emplace_back(class_obj);
            const auto point = new PointerToNode(class_obj);
            program->nodes.emplace_back(point);
            const auto param = new ArgDeclNode("self", point);
            program->nodes.emplace_back(param);
            node->args.insert(node->args.begin(), param);
        }
        for (const auto &i: node->args) {
            const auto param = dynamic_pointer_cast<SemVariable>(objVisit(i));
            obj->args.emplace_back(param);
        }
        if (node->body) {
            visit(node->body);
        }
        symbols.leaveScope();
        parent.pop();

        return toSNPtr(obj);
    }

    std::any Analyzer::visitBlock(BlockNode *node) {
        shared_ptr<SemObject> val;
        for (const auto &i: node->body) {
            val = objVisit(i);
        }
        return val;
    }

    std::any Analyzer::visitFloat(FloatNode *node) {
        return make<SemValue>(getPrimitiveType("float"));
    }

    std::any Analyzer::visitInteger(IntegerNode *node) {
        return make<SemValue>(getPrimitiveType("int"));
    }

    std::any Analyzer::visitChar(CharNode *node) {
        return make<SemValue>(getPrimitiveType("char"));
    }

    std::any Analyzer::visitBoolean(BooleanNode *node) {
        return make<SemValue>(getPrimitiveType("bool"));
    }

    std::any Analyzer::visitObject(ObjectNode *node) {
        const auto &&obj = symbols.getObject(node->name);
        return node->obj = obj;
    }

    std::any Analyzer::visitVarDecl(VarDeclNode *node) {
        // Extract type and value
        auto type = resolveType(node);
        const auto value = node->value ? cast<SemValue>(objVisit(node->value)) : nullptr;

        // Validate type
        if (type == getPrimitiveType("void")) {
            throw TypeError("The type 'void' cannot be used as a type for local variables");
        }

        // Validate value against type
        if (type && value && node->value) {
            validateAndAdjustValue(type, value, node->value);
        }

        // Create and register the variable
        const auto obj = make_shared<SemVariable>(node->name, type);
        node->obj = obj;
        obj->isLocalVar = true;
        symbols.addObject(obj);

        return toSNPtr(obj);
    }

    // Helper function to resolve type
    std::shared_ptr<TypeInfo> Analyzer::resolveType(const VarDeclNode *node) {
        if (node->type) {
            const auto obj = objVisit(node->type);
            const auto semType = std::dynamic_pointer_cast<SemType>(obj);
            return semType ? semType->type : nullptr;
        }
        return node->value ? cast<SemValue>(objVisit(node->value))->type : nullptr;
    }

    // Helper function to validate and adjust value
    void Analyzer::validateAndAdjustValue(const std::shared_ptr<TypeInfo> &type,
                                          const std::shared_ptr<SemValue> &value,
                                          ExprNode *exprNode) {
        auto throwTypeError = [&](const std::string &message) {
            throw TypeError(std::format("Cannot convert '{}' to '{}'", value->type->name, type->name));
        };

        auto isConvertible = [&]() -> bool {
            return !value->type->equal(type.get()) && !op::isLosslessConvertible(value->type, type);
        };

        if (isConvertible()) {
            throwTypeError("Type conversion error");
        }

        if (!exprNode && type->name != "void") {
            throwTypeError("Expression node is required for non-void type");
        }

        if (!value->type->equal(type.get()) && op::isLosslessConvertible(value->type, type)) {
            if (value->type->getTypeKind() == TypeInfo::Primitive) {
                const auto primitiveType = std::dynamic_pointer_cast<PrimitiveTypeInfo>(value->type);
                if (!primitiveType) throw TypeError("Invalid primitive type");
                exprNode->cast_type = primitiveType->sign ? ExprNode::SExt : ExprNode::ZExt;
            }
        }
    }

    std::any Analyzer::visitArgDecl(ArgDeclNode *node) {
        const auto type = cast<SemType>(objVisit(node->type));
        const auto obj = make_shared<SemVariable>(node->name, type->type);
        node->obj = obj;
        symbols.addObject(obj);
        return toSNPtr(obj);
    }

    std::any Analyzer::visitReturn(ReturnNode *node) {
        const auto func = parent.top();
        const auto returnType = func->returnType;
        shared_ptr<SemValue> resultValue;
        if (node->value) {
            const auto result = objVisit(node->value);
            if (const auto value = std::dynamic_pointer_cast<SemValue>(result)) {
                resultValue = value;
            } else {
                throw TypeError("Result must be a Value");
            }
        } else {
            resultValue = voidValue;
        }
        validateAndAdjustValue(returnType, resultValue, node->value);
        return nilValue;
    }

    std::any Analyzer::visitCall(CallNode *node) {
        const auto obj = objVisit(node->value);
        if (obj->getKind() != SemObject::Function) {
            throw TypeError(std::format("'{}' object is not callable", obj->name));
        }
        if (dynamic_cast<MemberAccessNode *>(node->value)) {
            node->call_type = CallNode::CallType::Self;
        }
        const auto func = dynamic_pointer_cast<SemFunction>(obj);
        int index = 0;
        for (const auto &i: node->args) {
            const auto rel = objVisit(i);
            const auto value = std::dynamic_pointer_cast<SemValue>(rel);
            if (value == nullptr) {
                throw TypeError(std::format("'{}' object not a value", value->name));
            }
            validateAndAdjustValue(func->args[index]->type, value, i);
            index++;
        }
        return make<SemValue>(func->returnType);
    }

    std::any Analyzer::visitMemberAccess(MemberAccessNode *node) {
        const auto obj = objVisit(node->left);
        const auto theClass = std::dynamic_pointer_cast<StructTypeInfo>(std::dynamic_pointer_cast<SemValue>(obj)->type);
        if (theClass == nullptr) {
            throw runtime_error("Left is not a class");
        }
        node->theClass = theClass->theClass.lock();
        if (node->theClass->hasMember(node->right)) {
            node->type = MemberAccessNode::Member;
            const auto child = node->theClass->getMember(node->right);
            node->childObj = child;
            return toSNPtr(child);
        }
        if (node->theClass->hasMethod(node->right)) {
            node->type = MemberAccessNode::Method;
            const auto child = node->theClass->getMethod(node->right);
            node->childObj = child;
            return toSNPtr(child);
        }
        throw runtime_error("Right Not Member or Method");
    }

    std::any Analyzer::visitClassDecl(ClassDeclNode *node) {
        const auto typeinfo = make_shared<StructTypeInfo>(std::vector<std::shared_ptr<TypeInfo>>{});
        const auto obj = make_shared<SemClass>(node->name, typeinfo);
        node->obj = obj;
        symbols.addObject(obj);

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
            i->theClass = obj;
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


    std::any Analyzer::visitPointerTo(PointerToNode *node) {
        const auto obj = objVisit(node->type);
        if (const auto type = std::dynamic_pointer_cast<SemType>(obj)) {
            const auto typeinfo = make_shared<PointerTypeInfo>(type->type);
            return make<SemType>("*", typeinfo);
        }
        throw runtime_error("Object not a type");
    }

    std::any Analyzer::visitBinaryOp(BinaryOpNode *node) {
        // 内置的
        const auto left = std::dynamic_pointer_cast<SemValue>(objVisit(node->left));
        const auto right = std::dynamic_pointer_cast<SemValue>(objVisit(node->right));
        node->leftType = left->type;
        node->rightType = right->type;
        if (left == nullptr)throw runtime_error("Left must be a Value");
        if (right == nullptr)throw runtime_error("Right must be a Value");
        if (op::isBuiltinBinary(left->type, right->type)) {
            node->type = OpNode::Builtin;
            if (node->op == "&&" || node->op == "||") {
                node->type = OpNode::ShortCircuited;
            }
            const auto &&type = op::getBuiltinBinary(left->type, right->type, node->op);
            if (type == nullptr) {
                throw runtime_error(std::format("Unable to find implementation of operator '{}' '{}' '{}'", left->type->name, node->op, right->type->name));
            }
            return make<SemValue>(op::getBuiltinBinary(left->type, right->type, node->op));
        }
        node->type = OpNode::Custom;
        return nilValue;
    }

    std::any Analyzer::visitFor(ForNode *node) {
        symbols.joinScope();
        if (node->init)visit(node->init);
        if (node->condition) {
            const auto cond = objVisit(node->condition);
            if (const auto value = dynamic_pointer_cast<SemValue>(cond)) {
                if (value->type != getPrimitiveType("bool")) {
                    throw TypeError("Condition must be a bool");
                }
            } else {
                throw TypeError("Condition must be a bool");
            }
        }
        if (node->increment)visit(node->increment);
        visit(node->body);
        symbols.leaveScope();
        return nilValue;
    }

    std::any Analyzer::visitWhile(WhileNode *node) {
        symbols.joinScope();
        if (node->condition) {
            const auto cond = objVisit(node->condition);
            if (const auto value = dynamic_pointer_cast<SemValue>(cond)) {
                if (value->type != getPrimitiveType("bool")) {
                    throw TypeError("Condition must be a bool");
                }
            } else {
                throw TypeError("Condition must be a bool");
            }
        }
        visit(node->body);
        symbols.leaveScope();
        return nilValue;
    }
} // riddle
