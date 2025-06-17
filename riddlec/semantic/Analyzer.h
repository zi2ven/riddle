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

#include "nodes.h"
#include "nodes/NodeVisitor.h"
#include "semantic/SymbolTable.h"

namespace riddle {
    class SemObject;
}

namespace riddle {
    class Analyzer final : public NodeVisitor {
        SymbolTable symbols;

        std::shared_ptr<SemValue> voidValue = std::make_shared<SemValue>(getPrimitiveType("void"));
        std::shared_ptr<SemObject> nilValue = voidValue;

        std::stack<FuncDeclNode*> parent;

        ProgramNode* program = nullptr;

    public:
        Analyzer();

        ~Analyzer() override;

        [[nodiscard]] std::shared_ptr<SemObject> objVisit(ExprNode *node);

        [[nodiscard]] std::shared_ptr<SemObject> objVisit(const std::shared_ptr<ExprNode> &node);

        std::any visitProgram(ProgramNode *node) override;

        std::any visitFuncDecl(FuncDeclNode *node) override;

        std::any visitBlock(BlockNode *node) override;

        std::any visitFloat(FloatNode *node) override;

        std::any visitInteger(IntegerNode *node) override;

        std::any visitChar(CharNode *node) override;

        std::any visitString(StringNode *node) override;

        std::any visitBoolean(BooleanNode *node) override;

        std::any visitObject(ObjectNode *node) override;

        std::any visitVarDecl(VarDeclNode *node) override;

        std::shared_ptr<TypeInfo> resolveType(const VarDeclNode *node);

        static void validateAndAdjustValue(const std::shared_ptr<TypeInfo> &type, const std::shared_ptr<SemValue> &value, ExprNode *exprNode);

        std::any visitArgDecl(ArgDeclNode *node) override;

        std::any visitReturn(ReturnNode *node) override;

        std::any visitCall(CallNode *node) override;

        std::any visitClassDecl(ClassDeclNode *node) override;

        std::any visitMemberAccess(MemberAccessNode *node) override;

        static std::shared_ptr<SemObject> ClassMemberAccess(const std::shared_ptr<TypeInfo> &type, MemberAccessNode *node);

        static std::shared_ptr<SemObject> UnionMemberAccess(const std::shared_ptr<TypeInfo> &type, MemberAccessNode *node);

        std::any visitPointerTo(PointerToNode *node) override;

        std::any visitBinaryOp(BinaryOpNode *node) override;

        std::any visitCompoundOp(CompoundOpNode *node) override;

        std::any visitIf(IfNode *node) override;

        std::any visitFor(ForNode *node) override;

        std::any visitWhile(WhileNode *node) override;

        std::any visitUnion(UnionNode *node) override;
    };
} // riddle
