#pragma once
#include <memory>
#include <ranges>
#include <utility>

#include "Modifier.h"
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
        bool isLocalVar = false;
        bool needLoad = true;
        Modifier modifier;

        SemVariable(const std::string &name, const std::shared_ptr<TypeInfo> &type): SemValue(type, name, Variable) {}
    };

    class SemFunction final : public SemObject {
    public:
        std::shared_ptr<TypeInfo> returnType;
        std::vector<std::shared_ptr<SemVariable>> args;
        llvm::Function *func = nullptr;
        Modifier modifier;
        bool isVarArg;

        SemFunction(const std::string &name,
                    const std::shared_ptr<TypeInfo> &returnType,
                    std::vector<std::shared_ptr<SemVariable>> args = {},
                    const bool isVarArg = false): SemObject(name, Function),
                                                  returnType(returnType), args(std::move(args)),
                                                  isVarArg(isVarArg) {}
    };

    class SemType : public SemObject {
    public:
        std::shared_ptr<TypeInfo> type;

        explicit SemType(const std::string &name, std::shared_ptr<TypeInfo> type): SemObject(name, Type), type(std::move(type)) {}
    };

    class ISemProvider {
    public:
        virtual ~ISemProvider() = default;

        [[nodiscard]] virtual std::shared_ptr<SemVariable> getMember(const std::string &name) const = 0;
    }__attribute__((packed));

    class SemClass final : public SemType, public ISemProvider {
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

        std::shared_ptr<SemVariable> getMember(const int index) {
            for (const auto &[idx, var]: members | std::views::values) {
                if (idx == index) {
                    return var;
                }
            }
            throw std::runtime_error("Member not found at index " + std::to_string(index));
        }

        std::shared_ptr<SemVariable> getMember(const std::string &name) const override {
            if (!members.contains(name)) {
                throw std::runtime_error("Member not found");
            }
            return members.at(name).second;
        }

        int getMemberIndex(const std::string &name) const {
            if (!members.contains(name)) {
                throw std::runtime_error("Member not found");
            }
            return members.at(name).first;
        }

        std::shared_ptr<SemFunction> getMethod(const std::string &name) const {
            if (!methods.contains(name)) {
                throw std::runtime_error("Method not found");
            }
            return methods.at(name);
        }

        bool hasMember(const std::string &name) const {
            return members.contains(name);
        }

        bool hasMethod(const std::string &name) const {
            return methods.contains(name);
        }
    };

    class SemUnion final : public SemType, public ISemProvider {
        std::unordered_map<std::string, std::shared_ptr<SemVariable>> members;

    public:
        SemUnion(const std::string &name, const std::shared_ptr<UnionTypeInfo> &type): SemType(name, type) {}

        void addMember(const std::shared_ptr<SemVariable> &member) {
            if (members.contains(member->name)) {
                throw std::runtime_error("Member already exists");
            }
            members[member->name] = member;
        }

        [[nodiscard]] std::shared_ptr<SemVariable> getMember(const std::string &name) const override {
            if (!members.contains(name)) {
                throw std::runtime_error("Member not found");
            }
            return members.at(name);
        }

        [[nodiscard]] bool hasMember(const std::string &name) const {
            return members.contains(name);
        }
    };
}
