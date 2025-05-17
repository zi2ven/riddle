#pragma once

#include "nodes.h"

namespace riddle {
    class Analyzer final : public NodeVisitor {
        std::any visitProgram(ProgramNode *node) override;
        std::any visitFuncDecl(FuncDeclNode *node) override;
        std::any visitBlock(BlockNode *node) override;
        std::any visitFloat(FloatNode *node) override;
        std::any visitInteger(IntegerNode *node) override;
    };
} // riddle
