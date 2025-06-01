#pragma once
#include <format>
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

        virtual std::shared_ptr<TypeInfo> getPointValue();

        [[nodiscard]] TypeKind getTypeKind() const {
            return kind;
        }

        virtual bool equal(TypeInfo *other) {
            return this->kind == other->kind && this->name == other->name;
        }
    };

    // Primitives Type List
    const static std::vector<std::string> primitives = {
        "int",
        "float",
        "double",
        "bool",
        "short",
        "char",
        "void"
    };

    class PrimitiveTypeInfo final : public TypeInfo {
    public:
        bool sign;

        explicit PrimitiveTypeInfo(const std::string &name, const bool sign = true): TypeInfo(name), sign(sign) {
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

        std::shared_ptr<TypeInfo> getPointValue() override;

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

    /**
     * @brief A mapping of primitive type names to their respective sizes in bits.
     *
     * This unordered map associates the names of primitive types, such as "int" and "long",
     * with their corresponding sizes in bits. The size information is used to determine
     * the bit-width of primitive types during type analysis or code generation.
     *
     * The map is defined as static, ensuring it has internal linkage and is only accessible
     * within the enclosing translation unit. It is initialized with predefined values for
     * common primitive types.
     */
    static std::unordered_map<std::string, size_t> primitiveSize = {
        {"int", 32},
        {"long", 64},
        {"char", 8},
        {"bool", 1},
        {"short", 32},
    };
}
