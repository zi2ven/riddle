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
#include <vector>

#include "type.h"
#include "support/location .h"

namespace riddle::hir {
    class HirVisitor;

    class HirElement {
    public:
        HirElement() = default;

        virtual ~HirElement() = default;

        virtual void accept(HirVisitor *visitor) = 0;
    };

    class HirStatement : public HirElement {};

    class HirProgram final : public HirElement {
    public:
        std::vector<HirStatement *> stmts;

        void accept(HirVisitor *visitor) override;
    };

    class HirDeclaration : public HirStatement {
    public:
        std::string name;
        SourceLocation location;

    protected:
        explicit HirDeclaration(std::string name): name(std::move(name)) {}
    };

    class HirExpression : public HirStatement {
    public:
        std::shared_ptr<Type> type;
    };

    class HirIntLiteral final : public HirExpression {
    public:
        explicit HirIntLiteral(int value);

        int value;

        void accept(HirVisitor *visitor) override;
    };

    class HirFloatLiteral final : public HirExpression {
    public:
        explicit HirFloatLiteral(float value);

        float value;

        void accept(HirVisitor *visitor) override;
    };

    class HirCharLiteral final : public HirExpression {
    public:
        explicit HirCharLiteral(char value);

        char value;

        void accept(HirVisitor *visitor) override;
    };

    class HirSymbol final : public HirExpression {
    public:
        enum class SymbolKind {
            Unknown,
            Variable,
            Function,
            Type,
        };

        std::string name;
        SymbolKind kind = SymbolKind::Unknown;
        HirDeclaration *declaration = nullptr;

        explicit HirSymbol(std::string n): name(std::move(n)) {}

        void accept(HirVisitor *visitor) override;
    };

    class HirVarDecl final : public HirDeclaration {
    public:
        HirVarDecl(const std::string &name, Type *type, HirExpression *value, bool isVal);

        bool isVal;

        Type *type;
        HirExpression *value;

        void accept(HirVisitor *visitor) override;
    };
}
