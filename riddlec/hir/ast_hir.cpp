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
#include "parser/RiddleLexer.h"
#include "parser/RiddleParser.h"

namespace riddle::ast {
    RiddleParser::ProgramContext *parseCode(const std::string &code) {
        using namespace antlr4;
        ANTLRInputStream input(code);
        RiddleLexer lexer(&input);
        CommonTokenStream tokens(&lexer);
        RiddleParser parser(&tokens);
        return parser.program();
    }

    using namespace riddle::hir;

    std::any ASTLower::visitIntLit(RiddleParser::IntLitContext *context) {
        return makeHir<HirIntLiteral>(std::stoi(context->getText()));
    }

    std::any ASTLower::visitFloatLit(RiddleParser::FloatLitContext *context) {
        return makeHir<HirFloatLiteral>(std::stoi(context->getText()));
    }

    std::any ASTLower::visitCharLit(RiddleParser::CharLitContext *context) {
        const auto lit = context->getText();
        return makeHir<HirCharLiteral>(lit.substr(1, lit.size() - 2));
    }
}
