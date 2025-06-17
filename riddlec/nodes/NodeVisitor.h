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

#pragma once
#include <any>

#include "nodes.h"

namespace riddle {
    class NodeVisitor {
    public:
        virtual ~NodeVisitor() = default;

        virtual std::any visit(ExprNode *node);

        virtual std::any visitProgram(ProgramNode *node);

        virtual std::any visitBlock(BlockNode *node);

        virtual std::any visitArgDecl(ArgDeclNode *node);

        virtual std::any visitFuncDecl(FuncDeclNode *node);

        virtual std::any visitInteger(IntegerNode *node);

        virtual std::any visitFloat(FloatNode *node);

        virtual std::any visitChar(CharNode *node);

        virtual std::any visitString(StringNode *node);

        virtual std::any visitBoolean(BooleanNode *node);

        virtual std::any visitObject(ObjectNode *node);

        virtual std::any visitVarDecl(VarDeclNode *node);

        virtual std::any visitReturn(ReturnNode *node);

        virtual std::any visitCall(CallNode *node);

        virtual std::any visitClassDecl(ClassDeclNode *node);

        virtual std::any visitMemberAccess(MemberAccessNode *node);

        virtual std::any visitPointerTo(PointerToNode *node);

        virtual std::any visitBinaryOp(BinaryOpNode *node);

        virtual std::any visitUnaryOp(UnaryOpNode *node);

        virtual std::any visitCompoundOp(CompoundOpNode* node);

        virtual std::any visitIf(IfNode* node);

        virtual std::any visitFor(ForNode* node);

        virtual std::any visitWhile(WhileNode* node);

        virtual std::any visitEnum(EnumNode* node);

        virtual std::any visitUnion(UnionNode* node);
    };
}
