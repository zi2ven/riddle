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

#include "type_pass.h"

#include "hir/context.h"

riddle::hir::TypePass::TypePass(HirContext &context): context(context) {
    typeMap = {
        {"int", std::make_shared<IntegerType>(32)},
        {"float", std::make_shared<FloatType>(FloatType::FloatKind::Float)},
        {"bool", std::make_shared<IntegerType>(1)},
    };
}

std::shared_ptr<riddle::hir::Type> riddle::hir::TypePass::parseBasicType(const std::string_view name) {
    if (!typeMap.contains(name.data())) {
        throw std::runtime_error("Error parsing built-in symbol");
    }
    return typeMap.at(name.data());
}

std::any riddle::hir::TypePass::visitHirSymbol(HirSymbol *node) {
    // todo 实现自定义 type
    switch (node->kind) {
        case HirSymbol::SymbolKind::BuiltinType: {
            node->type = parseBasicType(node->name);
            break;
        }
        case HirSymbol::SymbolKind::Function: {
            node->type = dynamic_cast<HirFuncDecl *>(node->declaration)->functionType;
            break;
        }
        case HirSymbol::SymbolKind::Variable: {
            node->type = dynamic_cast<HirVarDecl *>(node->declaration)->type->type;
        }
        default: break;
    }

    return {};
}

std::any riddle::hir::TypePass::visitHirIntLiteral(HirIntLiteral *node) {
    node->type = typeMap.at("int");
    return {};
}

std::any riddle::hir::TypePass::visitHirFloatLiteral(HirFloatLiteral *node) {
    node->type = typeMap.at("float");
    return {};
}

std::any riddle::hir::TypePass::visitHirBooleanLiteral(HirBooleanLiteral *node) {
    node->type = typeMap.at("bool");
    return {};
}

std::any riddle::hir::TypePass::visitHirCall(HirCall *node) {
    //todo 支持重载决策
    visit(node->func);
    for (const auto i: node->params) {
        visit(i);
    }

    const auto fty = dynamic_cast<FunctionType *>(node->func->type.get());
    // 检查 object 是否为 func
    if (!fty) {
        throw std::runtime_error("object not a function");
    }

    for (unsigned i = 0; i < node->params.size(); ++i) {
        if (!node->params[i]->type->equal(fty->params[i].get())) {
            throw std::runtime_error("parameter " + std::to_string(i) + " not equal");
        }
    }

    node->type = fty->returnType;
    return {};
}

std::any riddle::hir::TypePass::visitHirFuncDecl(HirFuncDecl *node) {
    visit(node->returnType);

    std::vector<std::shared_ptr<Type>> params;
    for (const auto i: node->params) {
        visit(i);
        params.emplace_back(i->type->type);
    }

    node->functionType = std::make_shared<FunctionType>(node->returnType->type, std::move(params));

    for (const auto i: node->body) {
        visit(i);
    }
    return {};
}

std::any riddle::hir::TypePass::visitHirVarDecl(HirVarDecl *node) {
    if (node->type) {
        visit(node->type);
    }

    if (node->value) {
        visit(node->value);
    }

    if (!node->type && node->value) {
        node->type = context.make<HirSymbol>("@mid-type");
        node->type->type = node->value->type;
    }

    return {};
}
