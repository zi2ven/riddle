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

#include "node.h"

#include "visitor.h"

namespace riddle::hir {
    void HirProgram::accept(HirVisitor *visitor) {
        return visitor->visitHirProgram(this);
    }

    HirIntLiteral::HirIntLiteral(const int value): value(value) {
        type = std::make_shared<IntegerType>(32);
    }

    void HirIntLiteral::accept(HirVisitor *visitor) {
        return visitor->visitHirIntLiteral(this);
    }

    HirFloatLiteral::HirFloatLiteral(const float value): value(value) {
        type = std::make_shared<FloatType>(FloatType::FloatKind::Float);
    }

    void HirFloatLiteral::accept(HirVisitor *visitor) {
        return visitor->visitHirFloatLiteral(this);
    }

    HirCharLiteral::HirCharLiteral(const char value): value(value) {
        type = std::make_shared<CharType>();
    }

    void HirCharLiteral::accept(HirVisitor *visitor) {
        return visitor->visitHirCharLiteral(this);
    }

    void HirSymbol::accept(HirVisitor *visitor) {
        return visitor->visitHirSymbol(this);
    }

    void HirVarDecl::accept(HirVisitor *visitor) {
        return visitor->visitHirVarDecl(this);
    }

    void HirFuncDecl::accept(HirVisitor *visitor) {
        return visitor->visitHirFuncDecl(this);
    }

    void HirCall::accept(HirVisitor *visitor) {
        return visitor->visitHirCall(this);
    }
}
