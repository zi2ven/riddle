#include "Analyzer.h"

namespace riddle {
    std::any Analyzer::visitProgram(ProgramNode *node) {
        for (auto i: node->body) {
            visit(i);
        }
        return {};
    }

    std::any Analyzer::visitFuncDecl(FuncDeclNode *node) {
        return {};
    }

    std::any Analyzer::visitBlock(BlockNode *node) {
        for (auto i: node->body) {
            visit(i);
        }
        return {};
    }

    std::any Analyzer::visitFloat(FloatNode *node) {
        return {};
    }

    std::any Analyzer::visitInteger(IntegerNode *node) {
        return {};
    }
} // riddle
