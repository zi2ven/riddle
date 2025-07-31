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

#include "symbol_pass.h"

riddle::hir::SymbolPass::SymbolPass() {
    constexpr auto bt = HirSymbol::SymbolKind::BuiltinType;

    const auto builtinTypes = [&](const std::string &name) {
        table.addObject(std::make_unique<SymbolTable::Object>(name, bt, nullptr));
    };

    builtinTypes("int");
    builtinTypes("long");
    builtinTypes("short");
    builtinTypes("char");
    builtinTypes("byte");
    builtinTypes("float");
    builtinTypes("double");
}

std::any riddle::hir::SymbolPass::visitHirProgram(HirProgram *node) {
    predeclare(node->stmts);

    /* 第二遍 —— 正式遍历 */
    for (const auto decl: node->stmts) visit(decl);
    return {};
}

std::any riddle::hir::SymbolPass::visitHirSymbol(HirSymbol *node) {
    const auto obj = table.getObject(node->name);

    node->declaration = obj->decl;
    node->kind = obj->kind;
    return {};
}

std::any riddle::hir::SymbolPass::visitHirVarDecl(HirVarDecl *node) {
    bool declared = true;
    if (table.getObject(node->name) == nullptr) {
        declared = false;
    }

    if (!declared) {
        table.addObject(std::make_unique<SymbolTable::Object>(
            node->name, HirSymbol::SymbolKind::Variable, node));
    }

    if (funcStack.empty()) {
        node->isGlobal = true;
    } else {
        if (!node->isParam) funcStack.top()->definedVar.emplace_back(node);
    }

    if (node->type) visit(node->type);
    if (node->value) visit(node->value);
    return {};
}

std::any riddle::hir::SymbolPass::visitHirFuncDecl(HirFuncDecl *node) {
    visit(node->returnType);

    funcStack.push(node);
    table.join(false);
    for (const auto i: node->params) {
        i->isParam = true;
        visit(i);
    }
    for (const auto i: node->body) {
        visit(i);
    }
    funcStack.pop();
    table.exit();
    return {};
}
