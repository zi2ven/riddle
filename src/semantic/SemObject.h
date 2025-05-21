#pragma once
#include <memory>
#include <utility>

#include "TypeInfo.h"

namespace llvm {
    class Function;
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
    public:
        std::unordered_map<std::string, std::pair<int, std::shared_ptr<SemVariable>>> members;
        std::unordered_map<std::string, std::shared_ptr<SemFunction>> methods;

        explicit SemClass(const std::string &name, const std::shared_ptr<StructTypeInfo> &type): SemType(name, type) {}

        [[nodiscard]] std::shared_ptr<StructTypeInfo> getStructType() const {
            return std::static_pointer_cast<StructTypeInfo>(type);
        }

        void addMember(const std::shared_ptr<SemVariable> &member, int index) {
            if (members.contains(member->name)) {
                throw std::runtime_error("Member already exists");
            }
            members[member->name] = std::make_pair(index, member);
        }

        void addMethod(const std::shared_ptr<SemFunction> &method) {
            if (methods.contains(method->name)) {
                throw std::runtime_error("Method already exists");
            }
            methods[method->name] = method;
        }
    };
}
