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
#include <memory>
#include <string>
#include <utility>

#include "context.h"
#include "type.h"

namespace riddle::hir {
    class HirElement {
    public:
        HirElement() = default;

        virtual ~HirElement() = default;
    };

    class HirStatement : HirElement {};

    class HirDefinition : public HirStatement {
    public:
        std::string name;

    protected:
        explicit HirDefinition(std::string name): name(std::move(name)) {}
    };

    class HirExpression : public HirStatement {
    public:
        std::shared_ptr<type> type;
    };

    class HirIntLiteral final : public HirExpression {
    protected:
        int value;

    public:
        explicit HirIntLiteral(int value);

        [[nodiscard]] int getValue() const;
    };

    class HirFloatLiteral final : public HirExpression {
    protected:
        float value;
    public:
        explicit HirFloatLiteral(float value);

        [[nodiscard]] float getValue() const;
    };

    class HirCharLiteral final : public HirExpression {
    protected:
        char value;

    public:
        explicit HirCharLiteral(char value);

        [[nodiscard]] char getValue() const;
    };
}
