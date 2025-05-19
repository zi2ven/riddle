#pragma once
#include <memory>
#include <string>
#include <utility>
#include <llvm/IR/Type.h>

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
    };

    class PrimitiveTypeInfo final : public TypeInfo {
    public:
        explicit PrimitiveTypeInfo(const std::string &name): TypeInfo(name) {
            kind = Primitive;
        }
    };

    std::shared_ptr<PrimitiveTypeInfo> getPrimitiveType(const std::string &name);

    class PointerTypeInfo final : public TypeInfo {
        std::shared_ptr<TypeInfo> pointe;

        explicit PointerTypeInfo(const std::shared_ptr<TypeInfo> &type): TypeInfo("*"), pointe(type) {
            kind = Pointer;
        }

        std::shared_ptr<TypeInfo> getPointerTo() override;
    };
}
