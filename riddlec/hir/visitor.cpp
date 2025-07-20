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


#include "visitor.h"

#include "node.h"

namespace riddle::hir {
    void HirVisitor::visit(HirElement *node) {
        node->accept(this);
    }

    void HirVisitor::visitHirProgram(HirProgram *node) {
        for (const auto i:node->stmts) {
            visit(i);
        }
    }

    void HirVisitor::visitHirIntLiteral(HirIntLiteral *node) {}

    void HirVisitor::visitHirFloatLiteral(HirFloatLiteral *node) {}

    void HirVisitor::visitHirCharLiteral(HirCharLiteral *node) {}

    void HirVisitor::visitHirSymbol(HirSymbol *node) {}

    void HirVisitor::visitHirVarDecl(HirVarDecl *node) {
        visit(node->value);
    }

    void HirVisitor::visitHirFuncDecl(HirFuncDecl *node) {
        visit(node->returnType);
        for (const auto i:node->body) {
            visit(i);
        }
    }


}
