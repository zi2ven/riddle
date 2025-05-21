#pragma once
#include "TypeInfo.h"
#include "nodes/NodeVisitor.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/IRBuilder.h"

namespace riddle {
    class Generate final : public NodeVisitor {
        llvm::LLVMContext* context;
        std::unique_ptr<llvm::Module> module;
        llvm::IRBuilder<> builder;

        llvm::Type *getPrimitiveType(const std::string &name);

        llvm::Type *parseType(const std::shared_ptr<TypeInfo> &type);

    public:
        Generate();

        std::any visitProgram(ProgramNode *node) override;

        std::any visitInteger(IntegerNode *node) override;

        std::any visitFloat(FloatNode *node) override;

        std::any visitFuncDecl(FuncDeclNode *node) override;

        std::any visitVarDecl(VarDeclNode *node) override;

        std::any visitObject(ObjectNode *node) override;

        std::any visitReturn(ReturnNode *node) override;

        std::any visitCall(CallNode *node) override;
        std::any visitClassDecl(ClassDeclNode *node) override;
    };
} // riddle
