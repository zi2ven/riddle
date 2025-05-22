#pragma once
#include <memory>
#include <string>
#include <utility>
#include <llvm/IR/Type.h>

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
        };

    protected:
        TypeKind kind = Unknown;

    public:
        std::string name;
        llvm::Type *type = nullptr;

        explicit TypeInfo(std::string name): name(std::move(name)) {}

        virtual ~TypeInfo() = default;

        virtual std::shared_ptr<TypeInfo> getPointerTo();

        [[nodiscard]] TypeKind getTypeKind() const {
            return kind;
        }

        virtual bool equal(TypeInfo *other) {
            return this->kind == other->kind && this->name == other->name;
        }
    };

    class PrimitiveTypeInfo final : public TypeInfo {
    public:
        explicit PrimitiveTypeInfo(const std::string &name): TypeInfo(name) {
            kind = Primitive;
        }
    };

    std::shared_ptr<PrimitiveTypeInfo> getPrimitiveType(const std::string &name);

    class PointerTypeInfo final : public TypeInfo {
    public:
        std::shared_ptr<TypeInfo> pointe;

        explicit PointerTypeInfo(const std::shared_ptr<TypeInfo> &type): TypeInfo("*"), pointe(type) {
            kind = Pointer;
        }

        std::shared_ptr<TypeInfo> getPointerTo() override;

        bool equal(TypeInfo *other) override {
            return TypeInfo::equal(other) && this->pointe->equal(dynamic_cast<PointerTypeInfo *>(other));
        }
    };

    class StructTypeInfo final : public TypeInfo {
    public:
        std::weak_ptr<SemClass> theClass;
        std::vector<std::shared_ptr<TypeInfo>> types;
        explicit StructTypeInfo(std::vector<std::shared_ptr<TypeInfo>> types): TypeInfo("{}"), types(std::move(types)) {
            kind = Struct;
        }
    };
}
