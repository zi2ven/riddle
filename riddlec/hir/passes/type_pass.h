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

#include "pass.h"
#include "hir/visitor.h"

namespace riddle::hir {
    class TypePass final : public HirBasePass, public HirVisitor {
        auto intTy = std::make_shared<IntegerType>(32);
        auto floatTy = std::make_shared<FloatType>(FloatType::FloatKind::Float);
    public:
        void run(HirProgram *program) override {
            this->visitHirProgram(program);
        }

    protected:
        void visitHirIntLiteral(HirIntLiteral *node) override;
        void visitHirFloatLiteral(HirFloatLiteral *node) override;
        void visitHirCall(HirCall *node) override;
    };
}
