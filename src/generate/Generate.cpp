#include "Generate.h"

#include "nodes.h"
#include "grammar/config.h"

using namespace std;

namespace riddle {
    llvm::Type *Generate::getPrimitiveType(const string &name) {
        static const unordered_map<string, llvm::Type *> mp = {
            {"int", builder.getInt32Ty()},
            {"float", builder.getFloatTy()},
            {"void", builder.getVoidTy()},
        };

        const auto it = mp.find(name);
        if (it == mp.end()) {
            throw runtime_error("Unknown primitive type: " + name);
        }
        return it->second;
    }

    llvm::Type *Generate::parseType(const shared_ptr<TypeInfo> &type) {
        if (type->type) {
            return type->type;
        }
        if (type->getTypeKind() == TypeInfo::Primitive) {
            return getPrimitiveType(type->name);
        }
        return nullptr;
    }

    Generate::Generate(): context(globalContext.get()), module(make_unique<llvm::Module>("main", *globalContext)), builder(*globalContext) {}

    any Generate::visitProgram(ProgramNode *node) {
        for (const auto &i: node->body) {
            visit(i);
        }
        module->print(llvm::outs(), nullptr);
        return {};
    }

    any Generate::visitInteger(IntegerNode *node) {
        llvm::Value *value = builder.getInt32(node->value);;
        return value;
    }

    any Generate::visitFloat(FloatNode *node) {
        llvm::Value *value = llvm::ConstantFP::get(builder.getFloatTy(), node->value);
        return value;
    }

    any Generate::visitFuncDecl(FuncDeclNode *node) {
        // get args
        vector<llvm::Type *> argTypes;
        for (const auto &i: node->args) {
            argTypes.emplace_back(parseType(i->obj->type));
        }

        const auto returnType = parseType(node->obj->returnType);
        const auto funcType = llvm::FunctionType::get(returnType, argTypes, false);
        const auto func = llvm::Function::Create(funcType, llvm::GlobalValue::ExternalLinkage, node->name, module.get());

        // reset arg's memory
        unsigned index = 0;
        for (const auto &i: node->args) {
            i->obj->alloca = func->getArg(index);
            ++index;
        }

        node->obj->func = func;

        const auto entry = llvm::BasicBlock::Create(*context, "entry", func);
        builder.SetInsertPoint(entry);
        visit(node->body);
        return {};
    }

    any Generate::visitVarDecl(VarDeclNode *node) {
        const auto type = parseType(node->obj->type);
        const auto alloca = builder.CreateAlloca(type);
        node->obj->alloca = alloca;
        if (node->value) {
            const auto value = any_cast<llvm::Value *>(visit(node->value));
            builder.CreateStore(alloca, value);
        }
        return {};
    }

    any Generate::visitObject(ObjectNode *node) {
        switch (node->obj->getKind()) {
            case SemObject::Variable: {
                const auto var = dynamic_pointer_cast<SemVariable>(node->obj);
                llvm::Value *value = this->builder.CreateLoad(parseType(var->type), var->alloca);
                return value;
            }
            case SemObject::Function: {
                const auto func = dynamic_pointer_cast<SemFunction>(node->obj);
                llvm::Value *value = func->func;
                return value;
            }
            default:
                break;
        }
        return node->obj;
    }

    any Generate::visitReturn(ReturnNode *node) {
        llvm::Value *value = nullptr;
        if (node->value) {
            const auto result = any_cast<llvm::Value *>(visit(node->value));
            value = builder.CreateRet(result);
        } else {
            value = builder.CreateRetVoid();
        }
        return value;
    }

    any Generate::visitCall(CallNode *node) {
        const auto value = llvm::dyn_cast<llvm::Function>(any_cast<llvm::Value *>(visit(node->value)));
        vector<llvm::Value *> args;
        for (const auto &i: node->args) {
            args.emplace_back(std::any_cast<llvm::Value *>(visit(i)));
        }
        llvm::Value *result = builder.CreateCall(value, args);
        return result;
    }
} // riddle
