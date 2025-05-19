#include "Generate.h"

#include <iostream>

#include "nodes.h"
#include "grammar/config.h"

namespace riddle {
    llvm::Type *Generate::getPrimitiveType(const std::string &name) {
        static const std::unordered_map<std::string, llvm::Type *> mp = {
            {"int", builder.getInt32Ty()},
            {"void", builder.getVoidTy()},
        };

        const auto it = mp.find(name);
        if (it == mp.end()) {
            throw std::runtime_error("Unknown primitive type: " + name);
        }
        return it->second;
    }

    llvm::Type *Generate::parseType(const std::shared_ptr<TypeInfo> &type) {
        if (type->type) {
            return type->type;
        }
        if (type->getTypeKind() == TypeInfo::Primitive) {
            return getPrimitiveType(type->name);
        }
        return nullptr;
    }

    Generate::Generate(): context(globalContext.get()), module(std::make_unique<llvm::Module>("main", *globalContext)), builder(*globalContext) {}

    std::any Generate::visitProgram(ProgramNode *node) {
        for (const auto &i: node->body) {
            visit(i);
        }
        module->print(llvm::outs(), nullptr);
        return {};
    }

    std::any Generate::visitInteger(IntegerNode *node) {
        llvm::Value* value = builder.getInt32(node->value);;
        return value;
    }

    std::any Generate::visitFuncDecl(FuncDeclNode *node) {
        const auto returnType = parseType(node->obj->returnType);
        const auto funcType = llvm::FunctionType::get(returnType, false);
        const auto func = llvm::Function::Create(funcType, llvm::GlobalValue::ExternalLinkage, "", module.get());
        const auto entry = llvm::BasicBlock::Create(*context, "entry", func);
        builder.SetInsertPoint(entry);
        visit(node->body);
        return {};
    }

    std::any Generate::visitVarDecl(VarDeclNode *node) {
        const auto type = parseType(node->obj->type);
        const auto alloca = builder.CreateAlloca(type);
        if (node->value) {
            llvm::Value *value = nullptr;
            value = std::any_cast<llvm::Value *>(visit(node->value));
            builder.CreateStore(alloca, value);
        }

        return {};
    }
} // riddle
