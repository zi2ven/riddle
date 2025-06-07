#pragma once
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/Module.h>
#include "BuildInfo.h"
#include "TypeInfo.h"
#include "nodes/NodeVisitor.h"

namespace riddle {
    class Generate final : public NodeVisitor {
    public:
        std::unique_ptr<BuildInfo> info;

    private:
        llvm::LLVMContext *context;
        llvm::IRBuilder<> builder;

        llvm::Type *getPrimitiveType(const std::string &name);

        llvm::Type *parseType(const std::shared_ptr<TypeInfo> &type, size_t depth = 0);

    public:
        Generate();

        std::any visitProgram(ProgramNode *node) override;

        std::any visitInteger(IntegerNode *node) override;

        std::any visitFloat(FloatNode *node) override;

        std::any visitChar(CharNode *node) override;

        std::any visitBoolean(BooleanNode *node) override;

        std::any visitFuncDecl(FuncDeclNode *node) override;

        std::any visitBlock(BlockNode *node) override;

        std::any visitVarDecl(VarDeclNode *node) override;

        std::any visitObject(ObjectNode *node) override;

        std::any visitReturn(ReturnNode *node) override;

        std::any visitCall(CallNode *node) override;

        std::any visitClassDecl(ClassDeclNode *node) override;

        std::any visitMemberAccess(MemberAccessNode *node) override;

        std::any visitBinaryOp(BinaryOpNode *node) override;

        std::any visitCompoundOp(CompoundOpNode *node) override;

        std::any visitWhile(WhileNode *node) override;

        std::any visitFor(ForNode *node) override;

    };
} // riddle
