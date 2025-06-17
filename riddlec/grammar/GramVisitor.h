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
#include "parser/RiddleParserBaseVisitor.h"

namespace riddle {
    class GramVisitor final : public RiddleParserBaseVisitor {
        ProgramNode* program = new ProgramNode;
    public:
        ExprNode *nodeVisit(antlr4::tree::ParseTree *context);

        std::any visitExpressionEnd(RiddleParser::ExpressionEndContext *context) override;

        std::any visitProgram(RiddleParser::ProgramContext *context) override;

        std::any visitModifierList(RiddleParser::ModifierListContext *context) override;

        std::any visitFuncDecl(RiddleParser::FuncDeclContext *context) override;

        std::any visitBlock(RiddleParser::BlockContext *context) override;

        std::any visitInteger(RiddleParser::IntegerContext *context) override;

        std::any visitFloat(RiddleParser::FloatContext *context) override;

        std::any visitChar(RiddleParser::CharContext *context) override;

        std::any visitBoolean(RiddleParser::BooleanContext *context) override;

        std::any visitString(RiddleParser::StringContext *context) override;

        std::any visitObject(RiddleParser::ObjectContext *context) override;

        std::any visitVarDecl(RiddleParser::VarDeclContext *context) override;

        std::any visitDeclArgs(RiddleParser::DeclArgsContext *context) override;

        std::any visitReturnStmt(RiddleParser::ReturnStmtContext *context) override;

        std::any visitCallExpr(RiddleParser::CallExprContext *context) override;

        std::any visitClassDecl(RiddleParser::ClassDeclContext *context) override;

        std::any visitMemberAccess(RiddleParser::MemberAccessContext *context) override;

        std::any visitScopeAccess(RiddleParser::ScopeAccessContext *context) override;

        std::any visitPointerTo(RiddleParser::PointerToContext *context) override;

        std::any visitParenExpr(RiddleParser::ParenExprContext *context) override;

        std::any visitAddOp(RiddleParser::AddOpContext *context) override;

        std::any visitLogicAnd(RiddleParser::LogicAndContext *context) override;

        std::any visitLogicOr(RiddleParser::LogicOrContext *context) override;

        std::any visitEqOp(RiddleParser::EqOpContext *context) override;

        std::any visitBitAnd(RiddleParser::BitAndContext *context) override;

        std::any visitBitOr(RiddleParser::BitOrContext *context) override;

        std::any visitBitXor(RiddleParser::BitXorContext *context) override;

        std::any visitUnaryOp(RiddleParser::UnaryOpContext *context) override;

        std::any visitMulOp(RiddleParser::MulOpContext *context) override;

        std::any visitRelOp(RiddleParser::RelOpContext *context) override;

        std::any visitShiftOp(RiddleParser::ShiftOpContext *context) override;

        std::any visitCompoundAssignOp(RiddleParser::CompoundAssignOpContext *context) override;

        std::any visitIfStmt(RiddleParser::IfStmtContext *context) override;

        std::any visitForStmt(RiddleParser::ForStmtContext *context) override;

        std::any visitWhileStmt(RiddleParser::WhileStmtContext *context) override;

        std::any visitUnionDecl(RiddleParser::UnionDeclContext *context) override;

        std::any visitEnumValue(RiddleParser::EnumValueContext *context) override;

        std::any visitEnumStmt(RiddleParser::EnumStmtContext *context) override;
    };
} // riddle
