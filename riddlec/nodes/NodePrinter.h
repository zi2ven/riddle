#pragma once
#include "NodeVisitor.h"

namespace riddle {
    class NodePrinter final : public NodeVisitor {
    public:
        int depth = 0;
        std::any visitInteger(IntegerNode *node) override;
        std::any visitFloat(FloatNode *node) override;
        std::any visitChar(CharNode *node) override;
        std::any visitVarDecl(VarDeclNode *node) override;
        std::any visitObject(ObjectNode *node) override;
        std::any visitProgram(ProgramNode *node) override;
        std::any visitFuncDecl(FuncDeclNode *node) override;
        std::any visitArgDecl(ArgDeclNode *node) override;
        std::any visitBlock(BlockNode *node) override;
        std::any visitCall(CallNode *node) override;
        std::any visitReturn(ReturnNode *node) override;
    };
}
