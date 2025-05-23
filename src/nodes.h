#pragma once
#include <any>
#include <memory>
#include <utility>
#include <vector>

#include "nodes.h"
#include "TypeInfo.h"
#include "semantic/SemObject.h"

namespace riddle {
    class NodeVisitor;

    class ExprNode {
    public:
        virtual ~ExprNode() = default;

        virtual std::any accept(NodeVisitor *visitor) = 0;
    };

    class ProgramNode final : public ExprNode {
    public:
        ProgramNode() = default;

        std::vector<std::shared_ptr<ExprNode>> body;

        std::any accept(NodeVisitor *visitor) override;
    };

    class BlockNode final : public ExprNode {
    public:
        std::vector<std::shared_ptr<ExprNode>> body;

        BlockNode() = default;

        explicit BlockNode(std::vector<std::shared_ptr<ExprNode>> body): body(std::move(body)) {}

        std::any accept(NodeVisitor *visitor) override;
    };

    class ArgDeclNode final : public ExprNode {
    public:
        std::string name;
        std::shared_ptr<ExprNode> type;
        std::shared_ptr<SemVariable> obj;

        ArgDeclNode(std::string name, std::shared_ptr<ExprNode> type): name(std::move(name)), type(std::move(type)) {}

        std::any accept(NodeVisitor *visitor) override;
    };

    class FuncDeclNode final : public ExprNode {
    public:
        std::string name;
        std::shared_ptr<ExprNode> returnType;
        std::shared_ptr<BlockNode> body;
        std::vector<std::shared_ptr<ArgDeclNode>> args;
        bool isGlobal = true;
        std::shared_ptr<SemFunction> obj = nullptr;

        explicit FuncDeclNode(std::string name,
                              const std::shared_ptr<ExprNode> &return_type,
                              std::vector<std::shared_ptr<ArgDeclNode>> args,
                              const std::shared_ptr<BlockNode> &body = nullptr): name(std::move(name)),
                                                                                 returnType(return_type),
                                                                                 body(body), args(std::move(args)) {}

        std::any accept(NodeVisitor *visitor) override;
    };

    class IntegerNode final : public ExprNode {
    public:
        int value;
        explicit IntegerNode(const int value): value(value) {}

        std::any accept(NodeVisitor *visitor) override;
    };

    class FloatNode final : public ExprNode {
    public:
        double value;
        explicit FloatNode(const double value): value(value) {}

        std::any accept(NodeVisitor *visitor) override;
    };

    class CharNode final : public ExprNode {
    public:
        char value;
        explicit CharNode(const char value): value(value) {}

        std::any accept(NodeVisitor *visitor) override;
    };

    class ObjectNode final : public ExprNode {
    public:
        std::string name;
        std::shared_ptr<SemObject> obj;
        explicit ObjectNode(std::string name): name(std::move(name)) {}

        std::any accept(NodeVisitor *visitor) override;
    };

    class VarDeclNode final : public ExprNode {
    public:
        std::string name;
        std::shared_ptr<ExprNode> type;
        std::shared_ptr<ExprNode> value;
        std::shared_ptr<SemVariable> obj = nullptr;

        VarDeclNode(std::string name,
                    std::shared_ptr<ExprNode> type,
                    std::shared_ptr<ExprNode> value = nullptr): name(std::move(name)), type(std::move(type)),
                                                                value(std::move(value)) {}

        std::any accept(NodeVisitor *visitor) override;
    };

    class ReturnNode final : public ExprNode {
    public:
        std::shared_ptr<ExprNode> value;

        explicit ReturnNode(std::shared_ptr<ExprNode> value): value(std::move(value)) {}

        std::any accept(NodeVisitor *visitor) override;
    };

    class CallNode final : public ExprNode {
    public:
        std::vector<std::shared_ptr<ExprNode>> args;
        std::shared_ptr<ExprNode> value;

        explicit CallNode(std::shared_ptr<ExprNode> value,
                          std::vector<std::shared_ptr<ExprNode>> args = {}): args(std::move(args)),
                                                                             value(std::move(value)) {}

        std::any accept(NodeVisitor *visitor) override;
    };

    class ClassDeclNode final : public ExprNode {
    public:
        std::string name;
        std::vector<std::shared_ptr<VarDeclNode>> members;
        std::vector<std::shared_ptr<FuncDeclNode>> methods;
        std::shared_ptr<SemClass> obj;

        explicit ClassDeclNode(std::string name, std::vector<std::shared_ptr<VarDeclNode>> members,
                               std::vector<std::shared_ptr<FuncDeclNode>> methods)
            : name(std::move(name)), members(std::move(members)), methods(std::move(methods)) {}

        std::any accept(NodeVisitor *visitor) override;
    };

    class MemberAccessNode final : public ExprNode {
    public:
        enum Type : char {
            Member,
            Method,
            Unknown,
        };

        Type type = Unknown;
        std::shared_ptr<ExprNode> left;
        std::string right;
        std::shared_ptr<SemClass> theClass = nullptr;
        std::shared_ptr<SemObject> childObj;
        MemberAccessNode(std::shared_ptr<ExprNode> left, std::string right): left(std::move(left)), right(std::move(right)) {}

        std::any accept(NodeVisitor *visitor) override;
    };

    // only for types
    class PointerToNode final : public ExprNode {
    public:
        std::shared_ptr<ExprNode> type;

        explicit PointerToNode(std::shared_ptr<ExprNode> type): type(std::move(type)) {}

        std::any accept(NodeVisitor *visitor) override;
    };
}
