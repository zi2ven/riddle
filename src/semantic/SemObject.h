#pragma once
#include <memory>
#include <utility>
#include <llvm/IR/Function.h>

#include "TypeInfo.h"

namespace llvm {
    class Value;
}

namespace riddle {
    class SemObject {
    public:
        enum ObjectKind {
            Value,
            Variable,
            Type,
            Class,
            Function,
        };

    protected:
        ObjectKind kind;

        explicit SemObject(std::string name, const ObjectKind kind): kind(kind), name(std::move(name)) {}

    public:
        std::string name;

        virtual ~SemObject() = default;

        [[nodiscard]] ObjectKind getKind() const {
            return kind;
        }
    };

    class SemValue : public SemObject {
    public:
        std::shared_ptr<TypeInfo> type;

        explicit SemValue(const std::shared_ptr<TypeInfo> &type, const std::string &name = ""): SemObject(name, Value),
                                                                                                type(type) {}

    protected:
        explicit SemValue(const std::shared_ptr<TypeInfo> &type, const std::string &name, const ObjectKind kind): SemObject(name, kind),
            type(type) {}
    };

    class SemVariable final : public SemValue {
    public:
        llvm::Value *alloca = nullptr;

        SemVariable(const std::string &name, const std::shared_ptr<TypeInfo> &type): SemValue(type, name, Variable) {}
    };

    class SemFunction final : public SemObject {
    public:
        std::shared_ptr<TypeInfo> returnType;
        std::vector<std::shared_ptr<SemVariable>> args;
        llvm::Function *func = nullptr;

        SemFunction(std::string name, const std::shared_ptr<TypeInfo> &returnType,
                    std::vector<std::shared_ptr<SemVariable>> args = {}): SemObject(std::move(name), Function),
                                                                     returnType(returnType), args(std::move(args)) {}
    };

    class SemType : public SemObject {
    public:
        std::string name;
        std::shared_ptr<TypeInfo> type;

        explicit SemType(std::string name, std::shared_ptr<TypeInfo> type): SemObject(std::move(name), Type), type(std::move(type)) {}
    };

    class SemClass final : public SemType {

    };
}
