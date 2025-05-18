#pragma once
#include <any>
#include <memory>
#include <utility>
#include <vector>

#include "nodes.h"
#include "TypeInfo.h"

namespace riddle {
    class VarDeclNode;
    class ObjectNode;
    class ExprNode;
    class ProgramNode;
    class BlockNode;
    class FuncDeclNode;
    class IntegerNode;
    class FloatNode;

    class NodeVisitor {
    public:
        virtual ~NodeVisitor() = default;

        virtual std::any visit(ExprNode *node);

        virtual std::any visit(const std::shared_ptr<ExprNode> &node);

        virtual std::any visitProgram(ProgramNode *node) = 0;

        virtual std::any visitBlock(BlockNode *node) = 0;

        virtual std::any visitFuncDecl(FuncDeclNode *node) = 0;

        virtual std::any visitInteger(IntegerNode *node) = 0;

        virtual std::any visitFloat(FloatNode *node) = 0;

        virtual std::any visitObject(ObjectNode *node) = 0;

        virtual std::any visitVarDecl(VarDeclNode *node) = 0;
    };

    class ExprNode {
    public:
        virtual ~ExprNode() = default;

        virtual std::any accept(NodeVisitor *visitor) = 0;
    };

    class ProgramNode final : public ExprNode {
    public:
        ProgramNode() = default;

        std::vector<std::shared_ptr<ExprNode>> body;

        std::any accept(NodeVisitor *visitor) override {
            return visitor->visitProgram(this);
        }
    };

    class BlockNode final : public ExprNode {
    public:
        std::vector<std::shared_ptr<ExprNode>> body;

        BlockNode() = default;

        explicit BlockNode(std::vector<std::shared_ptr<ExprNode>> body): body(std::move(body)) {}

        std::any accept(NodeVisitor *visitor) override {
            return visitor->visitBlock(this);
        }
    };

    class FuncDeclNode final : public ExprNode {
    public:
        std::string name;
        std::shared_ptr<ExprNode> returnType;
        std::shared_ptr<BlockNode> body;
        bool isGlobal = true;

        explicit FuncDeclNode(std::string name,
                              const std::shared_ptr<ExprNode> &return_type,
                              const std::shared_ptr<BlockNode> &body = nullptr): name(std::move(name)),
                                                                                 returnType(return_type), body(body) {}

        std::any accept(NodeVisitor *visitor) override {
            return visitor->visitFuncDecl(this);
        }
    };

    class IntegerNode final : public ExprNode {
    public:
        int value;
        explicit IntegerNode(const int value): value(value) {}

        std::any accept(NodeVisitor *visitor) override {
            return visitor->visitInteger(this);
        }
    };

    class FloatNode final : public ExprNode {
    public:
        double value;
        explicit FloatNode(const double value): value(value) {}

        std::any accept(NodeVisitor *visitor) override {
            return visitor->visitFloat(this);
        }
    };

    class ObjectNode final : public ExprNode {
    public:
        std::string name;
        explicit ObjectNode(std::string name): name(std::move(name)) {}

        std::any accept(NodeVisitor *visitor) override {
            return visitor->visitObject(this);
        }
    };

    class VarDeclNode final : public ExprNode {
    public:
        std::string name;
        std::shared_ptr<ExprNode> type;
        std::shared_ptr<ExprNode> value;

        VarDeclNode(std::string name,
                    std::shared_ptr<ExprNode> type,
                    std::shared_ptr<ExprNode> value = nullptr): name(std::move(name)), type(std::move(type)),
                                                                value(std::move(value)) {}

        std::any accept(NodeVisitor *visitor) override {
            return visitor->visitVarDecl(this);
        }
    };
}
