#pragma once
#include <memory>
#include <utility>
#include "TypeInfo.h"

namespace riddle {
    class SemObject {
    public:
        std::string name;

        explicit SemObject(std::string name): name(std::move(name)) {}

        virtual ~SemObject() = default;
    };

    class SemValue : public SemObject {
    public:
        std::shared_ptr<TypeInfo> type;

        explicit SemValue(const std::shared_ptr<TypeInfo> &type, const std::string &name = ""): SemObject(name),
                                                                                                type(type) {}
    };

    class SemVariable final : public SemValue {
    public:
        SemVariable(const std::string &name, const std::shared_ptr<TypeInfo> &type): SemValue(type, name) {}
    };

    class SemFunction final : public SemObject {
    public:
        std::shared_ptr<TypeInfo> returnType;

        SemFunction(std::string name, const std::shared_ptr<TypeInfo> &type): SemObject(std::move(name)), returnType(type) {}
    };

    class SemType : public SemObject {
    public:
        std::string name;
        std::shared_ptr<TypeInfo> type;

        explicit SemType(std::string name,std::shared_ptr<TypeInfo> type): SemObject(std::move(name)), type(std::move(type)) {}
    };
}
