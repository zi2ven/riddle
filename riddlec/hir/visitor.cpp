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
    std::any HirVisitor::visit(HirElement *node) {
        return node->accept(this);
    }

    std::any HirVisitor::visitHirProgram(HirProgram *node) {
        for (const auto i: node->stmts) {
            visit(i);
        }
        return {};
    }

    std::any HirVisitor::visitHirIntLiteral(HirIntLiteral *node) { return {}; }

    std::any HirVisitor::visitHirFloatLiteral(HirFloatLiteral *node) { return {}; }

    std::any HirVisitor::visitHirCharLiteral(HirCharLiteral *node) { return {}; }

    std::any HirVisitor::visitHirBooleanLiteral(HirBooleanLiteral *node) { return {}; }

    std::any HirVisitor::visitHirSymbol(HirSymbol *node) { return {}; }

    std::any HirVisitor::visitHirVarDecl(HirVarDecl *node) {
        visit(node->value);
        return {};
    }

    std::any HirVisitor::visitHirFuncDecl(HirFuncDecl *node) {
        visit(node->returnType);
        for (const auto i: node->body) {
            visit(i);
        }
        return {};
    }

    std::any HirVisitor::visitHirClassDecl(HirClassDecl *node) {
        for (const auto i:node->members) {
            visit(i);
        }
        for (const auto i:node->methods) {
            visit(i);
        }
        return {};
    }


    std::any HirVisitor::visitHirCall(HirCall *node) {
        visit(node->func);
        for (const auto i: node->params) {
            visit(i);
        }
        return {};
    }
}
