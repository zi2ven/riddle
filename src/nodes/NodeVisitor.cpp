#include "nodes/NodeVisitor.h"
#include "nodes.h"

using namespace riddle;

std::any NodeVisitor::visit(ExprNode *node) {
    if (node == nullptr) {
        throw std::runtime_error("Node is null");
    }
    return node->accept(this);
}

std::any NodeVisitor::visit(const std::shared_ptr<ExprNode> &node) {
    if (node == nullptr) {
        throw std::runtime_error("Node is null");
    }
    return node->accept(this);
}

std::any NodeVisitor::visitProgram(ProgramNode *node) {
    for (const auto &i: node->body) {
        visit(i);
    }
    return {};
}

std::any NodeVisitor::visitBlock(BlockNode *node) {
    for (const auto &i: node->body) {
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
    for (const auto &i: node->args) {
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

std::any NodeVisitor::visitChar(CharNode *node) {
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
    if (node->value != nullptr) {
        visit(node->value);
    }
    return {};
}

std::any NodeVisitor::visitCall(CallNode *node) {
    visit(node->value);
    for (const auto &i: node->args) {
        visit(i);
    }
    return {};
}

std::any NodeVisitor::visitClassDecl(ClassDeclNode *node) {
    for (const auto &i: node->members) {
        visit(i);
    }
    for (const auto &i: node->methods) {
        visit(i);
    }
    return {};
}

std::any NodeVisitor::visitMemberAccess(MemberAccessNode *node) {
    visit(node->left);
    return {};
}

std::any NodeVisitor::visitPointerTo(PointerToNode *node) {
    visit(node->type);
    return {};
}

std::any NodeVisitor::visitBinaryOp(BinaryOpNode *node) {
    visit(node->left);
    visit(node->right);
    return {};
}
