#pragma once
#include <memory>
#include <string>
#include <utility>

namespace riddle {
    class TypeInfo {
    public:
        std::string name;

        explicit TypeInfo(std::string name): name(std::move(name)) {}

        virtual ~TypeInfo() = default;

        virtual std::shared_ptr<TypeInfo> getPointerTo();
    };

    class PrimitiveTypeInfo final : public TypeInfo {
    public:
        explicit PrimitiveTypeInfo(const std::string &name): TypeInfo(name) {}
    };

    std::shared_ptr<PrimitiveTypeInfo> getPrimitiveType(const std::string &name);

    class PointerTypeInfo final : public TypeInfo {
        std::shared_ptr<TypeInfo> pointe;

        explicit PointerTypeInfo(const std::shared_ptr<TypeInfo> &type): TypeInfo("*"), pointe(type) {}

        std::shared_ptr<TypeInfo> getPointerTo() override;
    };
}