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

#include <any>

#include "node.h"

namespace riddle::hir {

    class HirVisitor {
    public:
        virtual ~HirVisitor() = default;

        std::any visit(HirElement* node);

#define DEF_VISIT(NodeType) \
    virtual std::any visit##NodeType(NodeType* node);

        DEF_VISIT(HirProgram)
        DEF_VISIT(HirIntLiteral)
        DEF_VISIT(HirFloatLiteral)
        DEF_VISIT(HirCharLiteral)
        DEF_VISIT(HirBooleanLiteral)
        DEF_VISIT(HirSymbol)
        DEF_VISIT(HirVarDecl)
        DEF_VISIT(HirFuncDecl)
        DEF_VISIT(HirClassDecl)
        DEF_VISIT(HirCall)
    };

#undef DEF_VISIT
}
