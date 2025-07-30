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
    table.addObject(std::make_unique<SymbolTable::Object>("int", bt, nullptr));
    table.addObject(std::make_unique<SymbolTable::Object>("long", bt, nullptr));
    table.addObject(std::make_unique<SymbolTable::Object>("short", bt, nullptr));
    table.addObject(std::make_unique<SymbolTable::Object>("char", bt, nullptr));
    table.addObject(std::make_unique<SymbolTable::Object>("byte", bt, nullptr));
    table.addObject(std::make_unique<SymbolTable::Object>("float", bt, nullptr));
    table.addObject(std::make_unique<SymbolTable::Object>("double", bt, nullptr));
}

std::any riddle::hir::SymbolPass::visitHirSymbol(HirSymbol *node) {
    const auto obj = table.getObject(node->name);

    node->declaration = obj->decl;
    node->kind = obj->kind;
    return {};
}

std::any riddle::hir::SymbolPass::visitHirVarDecl(HirVarDecl *node) {
    auto obj = std::make_unique<SymbolTable::Object>(node->name, HirSymbol::SymbolKind::Variable, node);
    table.addObject(std::move(obj));
    if (funcStack.empty()) {
        node->isGlobal = true;
        return {};
    }
    funcStack.top()->definedVar.emplace_back(node);
    if (node->type)visit(node->type);
    if (node->value)visit(node->value);
    return {};
}

std::any riddle::hir::SymbolPass::visitHirFuncDecl(HirFuncDecl *node) {
    auto obj = std::make_unique<SymbolTable::Object>(node->name, HirSymbol::SymbolKind::Function, node);
    table.addObject(std::move(obj));

    visit(node->returnType);

    funcStack.push(node);
    table.join();
    for (const auto i: node->params) {
        visit(i);
    }
    for (const auto i: node->body) {
        visit(i);
    }
    funcStack.pop();
    table.exit();
    return {};
}
