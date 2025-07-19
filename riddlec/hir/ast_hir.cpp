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

    std::any ASTLower::visitProgram(RiddleParser::ProgramContext *context) {
        const auto program = makeHir<HirProgram>();
        for (const auto i: context->children) {
            const auto r = visit(i);
            if (!r.has_value()) {
                continue;
            }
            const auto result = std::any_cast<HirStatement*>(r);
            program->stmts.push_back(result);
        }
        return program;
    }

    std::any ASTLower::visitStatementEnd(RiddleParser::StatementEndContext *context) {
        return visit(context->children[0]);
    }

    std::any ASTLower::visitTypeLit(RiddleParser::TypeLitContext *context) {
        // todo 管理此处的 Type
        static std::unordered_map<std::string, Type *> type{
            {"int", new IntegerType(32)},
            {"char", new CharType()},
            {"short", new IntegerType(16)},
            {"byte", new IntegerType(8)},
            {"long", new IntegerType(64)},
            {"float", new FloatType(FloatType::FloatKind::Float)},
            {"double", new FloatType(FloatType::FloatKind::Double)}
        };

        const auto str = context->getText();

        if (!type.contains(str)) {
            throw std::runtime_error(std::format("unknown type '{}'", str));
        }

        return type.at(str);
    }

    std::any ASTLower::visitIntLit(RiddleParser::IntLitContext *context) {
        HirStatement* result = makeHir<HirIntLiteral>(std::stoi(context->getText()));
        return result;
    }

    std::any ASTLower::visitFloatLit(RiddleParser::FloatLitContext *context) {
        HirStatement* result = makeHir<HirFloatLiteral>(std::stoi(context->getText()));
        return result;
    }

    std::any ASTLower::visitCharLit(RiddleParser::CharLitContext *context) {
        const auto lit = context->getText();
        const char ch = lit[1];
        HirStatement* result = makeHir<HirCharLiteral>(ch);
        return result;
    }

    std::any ASTLower::visitVarDecl(RiddleParser::VarDeclContext *context) {
        const auto name = context->name->getText();
        Type *type = nullptr;
        if (context->type) {
            type = std::any_cast<Type *>(visitTypeLit(context->type));
        }
        HirStatement* result = makeHir<HirVarDecl>(name, type, nullptr, context->children[0]->getText() == "val");
        return result;
    }
}
