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

#include <unordered_map>
#include <unordered_set>

#include "pass.h"
#include "hir/context.h"
#include "hir/visitor.h"

namespace riddle::hir {

    class TypePass final : public HirBasePass, public HirVisitor {
        HirContext &context;
        std::unordered_map<std::string, std::shared_ptr<Type>> typeMap;
        std::unordered_set<HirVarDecl*> inferring;

        void collectTopLevelTypes(HirProgram *program);

    public:
        explicit TypePass(HirContext &context);

        void run(HirProgram *program) override;

    protected:
        std::shared_ptr<Type> parseBasicType(std::string_view name);

        std::any visitHirProgram       (HirProgram       *node) override;
        std::any visitHirSymbol        (HirSymbol        *node) override;
        std::any visitHirIntLiteral    (HirIntLiteral    *node) override;
        std::any visitHirFloatLiteral  (HirFloatLiteral  *node) override;
        std::any visitHirBooleanLiteral(HirBooleanLiteral*node) override;
        std::any visitHirCall          (HirCall          *node) override;
        std::any visitHirFuncDecl      (HirFuncDecl      *node) override;
        std::any visitHirVarDecl       (HirVarDecl       *node) override;
    };

} // namespace riddle::hir
