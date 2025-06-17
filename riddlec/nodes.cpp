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

#include "nodes.h"
#include "nodes/NodeVisitor.h"

using namespace riddle;

std::any ProgramNode::accept(NodeVisitor *visitor) {
    return visitor->visitProgram(this);
}

std::any BlockNode::accept(NodeVisitor *visitor) {
    return visitor->visitBlock(this);
}

std::any ArgDeclNode::accept(NodeVisitor *visitor) {
    return visitor->visitArgDecl(this);
}

std::any FuncDeclNode::accept(NodeVisitor *visitor) {
    return visitor->visitFuncDecl(this);
}

std::any IntegerNode::accept(NodeVisitor *visitor) {
    return visitor->visitInteger(this);
}

std::any FloatNode::accept(NodeVisitor *visitor) {
    return visitor->visitFloat(this);
}

std::any CharNode::accept(NodeVisitor *visitor) {
    return visitor->visitChar(this);
}

std::any StringNode::accept(NodeVisitor *visitor) {
    return visitor->visitString(this);
}

std::any BooleanNode::accept(NodeVisitor *visitor) {
    return visitor->visitBoolean(this);
}

std::any ObjectNode::accept(NodeVisitor *visitor) {
    return visitor->visitObject(this);
}

std::any VarDeclNode::accept(NodeVisitor *visitor) {
    return visitor->visitVarDecl(this);
}

std::any ReturnNode::accept(NodeVisitor *visitor) {
    return visitor->visitReturn(this);
}

std::any CallNode::accept(NodeVisitor *visitor) {
    return visitor->visitCall(this);
}

std::any ClassDeclNode::accept(NodeVisitor *visitor) {
    return visitor->visitClassDecl(this);
}

std::any MemberAccessNode::accept(NodeVisitor *visitor) {
    return visitor->visitMemberAccess(this);
}

std::any PointerToNode::accept(NodeVisitor *visitor) {
    return visitor->visitPointerTo(this);
}

std::any UnaryOpNode::accept(NodeVisitor *visitor) {
    return visitor->visitUnaryOp(this);
}

std::any BinaryOpNode::accept(NodeVisitor *visitor) {
    return visitor->visitBinaryOp(this);
}

std::any CompoundOpNode::accept(NodeVisitor *visitor) {
    return visitor->visitCompoundOp(this);
}

std::any IfNode::accept(NodeVisitor *visitor) {
    return visitor->visitIf(this);
}

std::any WhileNode::accept(NodeVisitor *visitor) {
    return visitor->visitWhile(this);
}

std::any ForNode::accept(NodeVisitor *visitor) {
    return visitor->visitFor(this);
}

std::any UnionNode::accept(NodeVisitor *visitor) {
    return visitor->visitUnion(this);
}

std::any EnumNode::accept(NodeVisitor *visitor) {
    return visitor->visitEnum(this);
}
