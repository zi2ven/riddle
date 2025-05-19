#include "nodes/NodeVisitor.h"
#include "nodes.h"

using namespace riddle;

std::any NodeVisitor::visit(ExprNode *node) {
    return node->accept(this);
}

std::any NodeVisitor::visit(const std::shared_ptr<ExprNode> &node) {
    return node->accept(this);
}

std::any NodeVisitor::visitProgram(ProgramNode *node) {
    for (auto i: node->body) {
        visit(i);
    }
    return {};
}

std::any NodeVisitor::visitBlock(BlockNode *node) {
    for (auto i: node->body) {
        visit(i);
    }
    return {};
}

std::any NodeVisitor::visitArgDecl(ArgDeclNode *node) {
    visit(node->type);
    return {};
}

std::any NodeVisitor::visitFuncDecl(FuncDeclNode *node) {
    visit(node->returnType);
    for (auto i: node->args) {
        visit(i);
    }
    visit(node->body);
    return {};
}

std::any NodeVisitor::visitInteger(IntegerNode *node) {
    return {};
}

std::any NodeVisitor::visitFloat(FloatNode *node) {
    return {};
}

std::any NodeVisitor::visitObject(ObjectNode *node) {
    return {};
}

std::any NodeVisitor::visitVarDecl(VarDeclNode *node) {
    if (node->type)visit(node->type);
    if (node->value)visit(node->value);
    return {};
}

std::any NodeVisitor::visitReturn(ReturnNode *node) {
    visit(node->value);
    return {};
}
