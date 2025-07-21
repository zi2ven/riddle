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

namespace riddle::hir {
    class Type {
    public:
        enum class Kind {
            Integer,
            Float,
            Function,
            Array,
            Class
        };

    protected:
        Kind kind;

    public:
        explicit Type(const Kind kind): kind(kind) {}

        virtual ~Type() = default;

        virtual std::string getName() = 0;

        virtual size_t getSize() = 0;

        [[nodiscard]] Kind getKind() const {
            return kind;
        }

        virtual bool equal(Type *other) {
            return this->getKind() == other->getKind();
        }
    };

    class IntegerType : public Type {
    protected:
        unsigned bits;

    public:
        explicit IntegerType(const unsigned bits): Type(Kind::Integer), bits(bits) {}

        std::string getName() override;

        size_t getSize() override;

        bool equal(Type *other) override {
            return this->getKind() == other->getKind() && this->getSize() == other->getSize();
        }
    };

    class FloatType final : public Type {
    public:
        enum class FloatKind : unsigned char {
            Float,
            Double,
            Half,
            Huge,
        };

    protected:
        FloatKind float_kind;

    public:
        explicit FloatType(const FloatKind kind): Type(Kind::Float), float_kind(kind) {}

        std::string getName() override;

        size_t getSize() override;

        bool equal(Type *other) override {
            return this->getKind() == other->getKind() && this->getSize() == other->getSize();
        }
    };

    class CharType final : public IntegerType {
    public:
        static inline unsigned CHAR_WIDTH = 8;

        CharType(): IntegerType(CHAR_WIDTH) {}

        std::string getName() override;
    };

    class FunctionType final : public Type {
    public:
        std::shared_ptr<Type> returnType;
        std::vector<std::shared_ptr<Type>> params;

        FunctionType(std::shared_ptr<Type> returnType,
                     const std::vector<std::shared_ptr<Type>> &params): Type(Kind::Function),
                                                                        returnType(std::move(returnType)),
                                                                        params(params) {}

        std::string getName() override;

        size_t getSize() override;

        bool equal(Type *other) override;
    };
}
