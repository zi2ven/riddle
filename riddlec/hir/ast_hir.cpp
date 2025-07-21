// Copyright (c) 2025 zi2ven
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#include "ast_hir.h"

#include "antlr4-runtime.h"
#include "node.h"
#include "parser/RiddleParser.h"

namespace riddle::ast {
    using namespace riddle::hir;

    void ASTLower::setLocation(SourceLocation &location, const antlr4::ParserRuleContext *ctx) const {
        location.line = ctx->start->getLine();
        location.column = ctx->start->getCharPositionInLine();
        location.filename = filename;
    }

    std::any ASTLower::visitProgram(RiddleParser::ProgramContext *context) {
        const auto program = makeHir<HirProgram>();
        for (const auto i: context->children) {
            const auto r = visit(i);
            if (!r.has_value()) {
                continue;
            }
            const auto result = hir_cast<HirStatement>(r);
            program->stmts.push_back(result);
        }
        return program;
    }

    std::any ASTLower::visitStatementEnd(RiddleParser::StatementEndContext *context) {
        return visit(context->children[0]);
    }

    std::any ASTLower::visitIntLit(RiddleParser::IntLitContext *context) {
        HirElement *result = makeHir<HirIntLiteral>(std::stoi(context->getText()));
        return result;
    }

    std::any ASTLower::visitFloatLit(RiddleParser::FloatLitContext *context) {
        HirElement *result = makeHir<HirFloatLiteral>(std::stoi(context->getText()));
        return result;
    }

    std::any ASTLower::visitCharLit(RiddleParser::CharLitContext *context) {
        const auto lit = context->getText();
        const char ch = lit[1];
        HirElement *result = makeHir<HirCharLiteral>(ch);
        return result;
    }

    std::any ASTLower::visitVarDecl(RiddleParser::VarDeclContext *context) {
        const auto name = context->name->getText();
        HirExpression *type = nullptr;
        if (context->type) {
            type = hir_cast<HirExpression>(visit(context->type));
        }
        HirExpression *init = nullptr;
        if (context->value) {
            init = hir_cast<HirExpression>(visit(context->value));
        }
        const auto decl = makeHir<HirVarDecl>(name, type, init, context->children[0]->getText() == "val");

        setLocation(decl->location, context);

        HirElement *result = decl;
        return result;
    }

    std::any ASTLower::visitObject(RiddleParser::ObjectContext *context) {
        const auto name = context->Identifier()->getText();

        HirElement *result = makeHir<HirSymbol>(name);

        return result;
    }

    std::any ASTLower::visitFuncParam(RiddleParser::FuncParamContext *context) {
        const auto name = context->name->getText();
        const auto type = hir_cast<HirExpression>(visit(context->type));

        HirElement *decl = makeHir<HirVarDecl>(name, type, nullptr, false);

        return decl;
    }

    std::any ASTLower::visitFuncDecl(RiddleParser::FuncDeclContext *context) {
        const auto name = context->name->getText();
        const auto returnType = hir_cast<HirExpression>(visit(context->returnType));

        std::vector<HirVarDecl *> params;
        for (const auto i: context->funcParam()) {
            const auto param = hir_cast<HirVarDecl>(visit(i));
            params.emplace_back(param);
        }

        const auto decl = makeHir<HirFuncDecl>(name, returnType, params);

        for (const auto i: context->body->children) {
            if (antlrcpp::is<antlr4::tree::TerminalNode *>(i)) {
                continue;
            }
            decl->body.push_back(hir_cast<HirStatement>(visit(i)));
        }

        HirElement *result = decl;
        return result;
    }

    std::any ASTLower::visitCallExpr(RiddleParser::CallExprContext *context) {
        const auto func = hir_cast<HirExpression>(visit(context->func));

        std::vector<HirExpression *> params;
        bool flag = false;
        for (const auto i: context->expression()) {
            if (!flag) {
                flag = true;
                continue;
            }
            params.push_back(hir_cast<HirExpression>(visit(i)));
        }

        HirElement *result = makeHir<HirCall>(func, std::move(params));
        return result;
    }
}
