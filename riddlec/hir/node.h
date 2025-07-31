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
#include <memory>
#include <string>
#include <utility>
#include <vector>

#include "type.h"
#include "support/location .h"

namespace llvm {
    class Function;
    class Value;
}

namespace riddle::hir {
    class HirVisitor;

    class HirElement {
    public:
        HirElement() = default;

        virtual ~HirElement() = default;

        virtual std::any accept(HirVisitor *visitor) = 0;
    };

    class HirStatement : public HirElement {};

    class HirProgram final : public HirElement {
    public:
        std::vector<HirStatement *> stmts;

        std::any accept(HirVisitor *visitor) override;
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

        std::any accept(HirVisitor *visitor) override;
    };

    class HirFloatLiteral final : public HirExpression {
    public:
        explicit HirFloatLiteral(float value);

        float value;

        std::any accept(HirVisitor *visitor) override;
    };

    class HirCharLiteral final : public HirExpression {
    public:
        explicit HirCharLiteral(char value);

        char value;

        std::any accept(HirVisitor *visitor) override;
    };

    class HirBooleanLiteral final : public HirExpression {
    public:
        explicit HirBooleanLiteral(bool value);

        bool value;

        std::any accept(HirVisitor *visitor) override;
    };

    class HirSymbol final : public HirExpression {
    public:
        enum class SymbolKind {
            Unknown,
            Variable,
            Function,
            Class,
            Type,
            BuiltinType,
        };

        std::string name;
        SymbolKind kind = SymbolKind::Unknown;
        // 后续加入重载决策后此处可能会有多个候选集
        HirDeclaration *declaration = nullptr;

        explicit HirSymbol(std::string n): name(std::move(n)) {}

        std::any accept(HirVisitor *visitor) override;
    };

    class HirVarDecl final : public HirDeclaration {
    public:
        HirVarDecl(const std::string &name,
                   HirExpression *typeLit,
                   HirExpression *value,
                   const bool isVal): HirDeclaration(name),
                                      isVal(isVal), type(typeLit), value(value) {}

        bool isVal;
        bool isGlobal = false;
        bool isParam = false;

        HirExpression *type;
        HirExpression *value;

        llvm::Value *llvmAlloca = nullptr;

        std::any accept(HirVisitor *visitor) override;
    };

    class HirFuncDecl final : public HirDeclaration {
    public:
        HirExpression *returnType;
        std::vector<HirVarDecl *> params;
        bool isVar;
        std::vector<HirStatement *> body;
        std::shared_ptr<FunctionType> functionType;

        llvm::Function *llvmFunc = nullptr;

        std::vector<HirVarDecl *> definedVar;

        HirFuncDecl(const std::string &name,
                    HirExpression *returnType,
                    std::vector<HirVarDecl *> params = {},
                    const bool isVar = false): HirDeclaration(name),
                                               returnType(returnType),
                                               params(std::move(params)),
                                               isVar(isVar) {}

        std::any accept(HirVisitor *visitor) override;
    };

    class HirClassDecl final : public HirDeclaration {
    public:
        std::vector<HirVarDecl *> members;
        std::vector<HirFuncDecl *> methods;

        std::shared_ptr<ClassType> classType;

        explicit HirClassDecl(const std::string &name): HirDeclaration(name) {}

        std::any accept(HirVisitor *visitor) override;
    };

    class HirCall final : public HirExpression {
    public:
        HirExpression *func;
        std::vector<HirExpression *> params;

        HirCall(HirExpression *func,
                std::vector<HirExpression *> params): func(func),
                                                      params(std::move(params)) {}

        std::any accept(HirVisitor *visitor) override;
    };

    class HirReturn final : public HirStatement {
    public:
        HirExpression *value;

        explicit HirReturn(HirExpression *value): value(value) {}

        std::any accept(HirVisitor *visitor) override;
    };
}
