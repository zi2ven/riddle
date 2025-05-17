#pragma once
#include <any>
#include <memory>
#include <utility>
#include <vector>

#include "TypeInfo.h"

namespace riddle {
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

        virtual std::any visit(std::shared_ptr<ExprNode> &node);

        virtual std::any visitProgram(ProgramNode *node) = 0;

        virtual std::any visitBlock(BlockNode *node) = 0;

        virtual std::any visitFuncDecl(FuncDeclNode *node) = 0;

        virtual std::any visitInteger(IntegerNode *node) = 0;

        virtual std::any visitFloat(FloatNode *node) = 0;
    };

    class ExprNode {
    public:
        std::shared_ptr<TypeInfo> type;

        explicit ExprNode(const std::shared_ptr<TypeInfo> &type): type(type) {}

        virtual ~ExprNode() = default;

        virtual std::any accept(NodeVisitor *visitor) = 0;
    };

    class ProgramNode final : public ExprNode {
    public:
        ProgramNode(): ExprNode(nullptr) {}
        std::vector<std::shared_ptr<ExprNode>> body;

        std::any accept(NodeVisitor *visitor) override {
            return visitor->visitProgram(this);
        }
    };

    class BlockNode final : public ExprNode {
    public:
        std::vector<std::shared_ptr<ExprNode>> body;
        BlockNode(): ExprNode(nullptr) {}
        explicit BlockNode(std::vector<std::shared_ptr<ExprNode>> body): ExprNode(nullptr), body(std::move(body)) {}

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
                              const std::shared_ptr<BlockNode> &body = nullptr): ExprNode(nullptr), name(std::move(name)),
                                                                                 returnType(return_type), body(body) {}

        std::any accept(NodeVisitor *visitor) override {
            return visitor->visitFuncDecl(this);
        }
    };

    class IntegerNode final : public ExprNode {
    public:
        int value;
        explicit IntegerNode(const int value): ExprNode(getPrimitiveType("int")), value(value) {}

        std::any accept(NodeVisitor *visitor) override {
            return visitor->visitInteger(this);
        }
    };

    class FloatNode final : public ExprNode {
    public:
        double value;
        explicit FloatNode(const double value): ExprNode(getPrimitiveType("float")), value(value) {}

        std::any accept(NodeVisitor *visitor) override {
            return visitor->visitFloat(this);
        }
    };
}
