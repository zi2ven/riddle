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

#pragma once

#include "context.h"
#include "node.h"
#include "parser/RiddleParser.h"
#include "parser/RiddleParserBaseVisitor.h"

namespace riddle::ast {
    class ASTLower final : public RiddleParserBaseVisitor {
        hir::HirContext context;
        std::string_view filename;

    public:
        template<class T, typename... Args>
        T *makeHir(Args &&... args) {
            return context.make<T>(std::forward<Args>(args)...);
        }

        template<class T>
        static T *hir_cast(const std::any &value) {
            return dynamic_cast<T *>(std::any_cast<hir::HirElement *>(value));
        }

        void setLocation(SourceLocation &location, const antlr4::ParserRuleContext *ctx) const;

        explicit ASTLower(const std::string &filename): filename(filename) {}

        std::any visitProgram(RiddleParser::ProgramContext *context) override;

        std::any visitStatementEnd(RiddleParser::StatementEndContext *context) override;

        std::any visitTypeLit(RiddleParser::TypeLitContext *context) override;

        std::any visitIntLit(RiddleParser::IntLitContext *context) override;

        std::any visitFloatLit(RiddleParser::FloatLitContext *context) override;

        std::any visitCharLit(RiddleParser::CharLitContext *context) override;

        std::any visitVarDecl(RiddleParser::VarDeclContext *context) override;

        std::any visitObject(RiddleParser::ObjectContext *context) override;
    };
}
