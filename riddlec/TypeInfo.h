/*
 * Copyright (c) 2025 wangziwenhk
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#pragma once
#include <format>
#include <memory>
#include <string>
#include <utility>
#include <llvm/IR/DerivedTypes.h>
#include <llvm/IR/Type.h>

namespace riddle {
    class SemUnion;
}

namespace riddle {
    class SemClass;
}

namespace riddle {
    class TypeInfo {
    public:
        enum TypeKind {
            Unknown,
            Primitive,
            Pointer,
            Struct,
            Union,
        };

    protected:
        TypeKind kind = Unknown;

    public:
        std::string name;
        llvm::Type *type = nullptr;

        explicit TypeInfo(std::string name): name(std::move(name)) {}

        virtual ~TypeInfo() = default;

        virtual std::shared_ptr<TypeInfo> getPointValue();

        [[nodiscard]] TypeKind getTypeKind() const {
            return kind;
        }

        virtual bool equal(TypeInfo *other) {
            return this->kind == other->kind && this->name == other->name;
        }

        [[nodiscard]] virtual size_t getSize() const = 0;
    };

    // Primitives Type List
    const inline std::vector<std::string> primitives = {
        "int",
        "float",
        "double",
        "bool",
        "short",
        "char",
        "void"
    };

    static std::unordered_map<std::string, size_t> primitiveSize = {
        {"int", 32},
        {"long", 64},
        {"char", 8},
        {"bool", 1},
        {"short", 32},
    };

    class PrimitiveTypeInfo final : public TypeInfo {
    public:
        bool sign;

        explicit PrimitiveTypeInfo(const std::string &name, const bool sign = true): TypeInfo(name), sign(sign) {
            kind = Primitive;
        }

        [[nodiscard]] size_t getSize() const override {
            return primitiveSize.at(name);
        }
    };

    std::shared_ptr<PrimitiveTypeInfo> getPrimitiveType(const std::string &name);

    class PointerTypeInfo final : public TypeInfo {
    public:
        static inline char bits = 64;
        std::shared_ptr<TypeInfo> pointe;

        explicit PointerTypeInfo(const std::shared_ptr<TypeInfo> &type): TypeInfo("ptr"), pointe(type) {
            kind = Pointer;
        }

        std::shared_ptr<TypeInfo> getPointValue() override;

        bool equal(TypeInfo *other) override {
            return TypeInfo::equal(other) && this->pointe->equal(dynamic_cast<PointerTypeInfo *>(other));
        }

        [[nodiscard]] size_t getSize() const override {
            return bits;
        }
    };

    class StructTypeInfo final : public TypeInfo {
    public:
        std::weak_ptr<SemClass> theClass;
        std::vector<std::shared_ptr<TypeInfo>> types;

        explicit StructTypeInfo(std::vector<std::shared_ptr<TypeInfo>> types): TypeInfo(""), types(std::move(types)) {
            kind = Struct;
        }

        [[nodiscard]] size_t getSize() const override {
            size_t size = 0;
            for (const auto &i: types) {
                size += i->getSize();
            }
            return size;
        }
    };

    class UnionTypeInfo final : public TypeInfo {
    public:
        std::weak_ptr<SemUnion> theUnion;
        std::vector<std::shared_ptr<TypeInfo>> types;

        explicit UnionTypeInfo(std::vector<std::shared_ptr<TypeInfo>> types): TypeInfo(""), types(std::move(types)) {
            kind = Union;
        }

        [[nodiscard]] size_t getSize() const override {
            size_t size = 0;
            for (const auto &i: types) {
                size = std::max(i->getSize(), size);
            }
            return size;
        }
    };
}
