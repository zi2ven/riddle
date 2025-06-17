/*
 * Copyright (c) 2025 wangziwenhk
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#include "nodes/NodeVisitor.h"
#include "nodes.h"

using namespace riddle;

std::any NodeVisitor::visit(ExprNode *node) {
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

std::any NodeVisitor::visitString(StringNode *node) {
    return {};
}

std::any NodeVisitor::visitBoolean(BooleanNode *node) {
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

std::any NodeVisitor::visitUnaryOp(UnaryOpNode *node) {
    visit(node->operand);
    return {};
}

std::any NodeVisitor::visitCompoundOp(CompoundOpNode *node) {
    visit(node->left);
    visit(node->right);
    return {};
}

std::any NodeVisitor::visitIf(IfNode *node) {
    visit(node->condition);
    visit(node->thenBody);
    visit(node->elseBody);
    return {};
}

std::any NodeVisitor::visitFor(ForNode *node) {
    if (node->init)visit(node->init);
    if (node->condition)visit(node->condition);
    if (node->increment)visit(node->increment);
    visit(node->body);
    return {};
}

std::any NodeVisitor::visitWhile(WhileNode *node) {
    visit(node->condition);
    visit(node->body);
    return {};
}

std::any NodeVisitor::visitEnum(EnumNode *node) {
    return {};
}

std::any NodeVisitor::visitUnion(UnionNode *node) {
    for (const auto i:node->members) {
        visit(i);
    }
    return {};
}
