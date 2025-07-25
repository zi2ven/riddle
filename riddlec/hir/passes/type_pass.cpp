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

std::any riddle::hir::TypePass::visitHirIntLiteral(HirIntLiteral *node) {
    node->type = this->intTy;
    return {};
}

std::any riddle::hir::TypePass::visitHirFloatLiteral(HirFloatLiteral *node) {
    node->type = this->floatTy;
    return {};
}

std::any riddle::hir::TypePass::visitHirCall(HirCall *node) {
    //todo 支持重载决策
    visit(node->func);
    for (const auto i: node->params) {
        visit(i);
    }

    const auto fty = dynamic_cast<FunctionType *>(node->type.get());
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
