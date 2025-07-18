/*
 * Copyright (c) 2025 wangziwenhk
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#pragma once
#include <any>
#include <bitset>
#include <memory>
#include <utility>
#include <vector>

#include "nodes.h"
#include "TypeInfo.h"
#include "semantic/Annoataion.h"
#include "semantic/Modifier.h"
#include "semantic/SemObject.h"

namespace riddle {
    class NodeVisitor;

    class ExprNode {
    public:
        enum CaseType {
            None, ///< Do nothing
            ZExt, ///< unsigned extend
            SExt  ///< signed extend
        };

        CaseType cast_type = None;

        virtual ~ExprNode() = default;

        virtual std::any accept(NodeVisitor *visitor) = 0;
    };

    class ProgramNode final : public ExprNode {
    public:
        ProgramNode() = default;

        std::vector<ExprNode *> body;
        std::vector<ExprNode *> nodes;

        std::any accept(NodeVisitor *visitor) override;

        ~ProgramNode() override {
            for (const auto i: nodes) {
                delete i;
            }
        }
    };

    class BlockNode final : public ExprNode {
    public:
        std::vector<ExprNode *> body;

        BlockNode() = default;

        explicit BlockNode(std::vector<ExprNode *> body): body(std::move(body)) {}

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

    class StringNode final : public ExprNode {
    public:
        std::string value;
        explicit StringNode(std::string value): value(std::move(value)) {}

        std::any accept(NodeVisitor *visitor) override;
    };

    class BooleanNode final : public ExprNode {
    public:
        bool value;
        explicit BooleanNode(const bool value): value(value) {}

        std::any accept(NodeVisitor *visitor) override;
    };

    class ObjectNode final : public ExprNode {
    public:
        std::string name;
        std::shared_ptr<SemObject> obj;
        explicit ObjectNode(std::string name): name(std::move(name)) {}

        std::any accept(NodeVisitor *visitor) override;
    };

    class DeclNode : public ExprNode {
    public:
        Modifier modifier;
        bool isNeedGen = true;
        bool isGlobal = true;
        std::string name;
        std::optional<Annotation> annotation;

        explicit DeclNode(std::string name): name(std::move(name)) {}
    };

    class ArgDeclNode final : public ExprNode {
    public:
        std::string name;
        ExprNode *type;
        std::shared_ptr<SemVariable> obj;

        ArgDeclNode(std::string name, ExprNode *type): name(std::move(name)), type(type) {}

        std::any accept(NodeVisitor *visitor) override;
    };

    class FuncDeclNode final : public DeclNode {
    public:
        ExprNode *returnType;
        BlockNode *body;
        std::vector<ArgDeclNode *> args;
        std::shared_ptr<SemFunction> obj = nullptr;
        std::shared_ptr<SemClass> theClass;
        std::vector<std::shared_ptr<SemVariable>> allocList;
        bool isVarArg;

        explicit FuncDeclNode(std::string name,
                              ExprNode *return_type,
                              std::vector<ArgDeclNode *> args,
                              const bool isVarArg = false,
                              BlockNode *body = nullptr): DeclNode(std::move(name)),
                                                          returnType(return_type),
                                                          body(body), args(std::move(args)),
                                                          isVarArg(isVarArg) {}

        std::any accept(NodeVisitor *visitor) override;
    };

    class VarDeclNode final : public DeclNode {
    public:
        ExprNode *type;
        ExprNode *value;
        std::shared_ptr<SemVariable> obj = nullptr;

        VarDeclNode(const std::string &name,
                    ExprNode *type,
                    ExprNode *value = nullptr): DeclNode(name), type(type),
                                                value(value) {}

        std::any accept(NodeVisitor *visitor) override;
    };

    class ReturnNode final : public ExprNode {
    public:
        ExprNode *value;

        explicit ReturnNode(ExprNode *value): value(value) {}

        std::any accept(NodeVisitor *visitor) override;
    };

    class CallNode final : public ExprNode {
    public:
        enum class CallType {
            Standard,
            Self,
        };

        CallType call_type = CallType::Standard;

        std::vector<ExprNode *> args;
        ExprNode *value;

        explicit CallNode(ExprNode *value,
                          std::vector<ExprNode *> args = {}): args(std::move(args)),
                                                              value(value) {}

        std::any accept(NodeVisitor *visitor) override;
    };

    class ClassDeclNode final : public ExprNode {
    public:
        std::string name;
        std::vector<VarDeclNode *> members;
        std::vector<FuncDeclNode *> methods;
        std::shared_ptr<SemClass> obj;

        explicit ClassDeclNode(std::string name, std::vector<VarDeclNode *> members,
                               std::vector<FuncDeclNode *> methods)
            : name(std::move(name)), members(std::move(members)), methods(std::move(methods)) {}

        std::any accept(NodeVisitor *visitor) override;
    };

    class MemberAccessNode final : public ExprNode {
    public:
        enum Type : char {
            ClassMember,
            ClassMethod,
            UnionMember,
            Unknown,
        };

        Type type = Unknown;
        ExprNode *left;
        std::string right;
        std::variant<std::shared_ptr<SemClass>, std::shared_ptr<SemUnion>> theObject;
        std::shared_ptr<SemObject> childObj;
        llvm::Value *parentValue = nullptr;
        bool isStatic; ///< 是否只能访问静态成员
        MemberAccessNode(ExprNode *left, std::string right, const bool isStatic = false): left(left), right(std::move(right)), isStatic(isStatic) {}

        std::any accept(NodeVisitor *visitor) override;
    };


    // only for types
    class PointerToNode final : public ExprNode {
    public:
        ExprNode *type;

        explicit PointerToNode(ExprNode *type): type(type) {}

        std::any accept(NodeVisitor *visitor) override;
    };

    class OpNode : public ExprNode {
    public:
        enum OpType {
            Builtin,
            ShortCircuited,
            Custom,
            Unknown,
        };

        OpType type = Unknown;
    };

    class UnaryOpNode final : public OpNode {
    public:
        ExprNode *operand;
        std::string op;

        UnaryOpNode(ExprNode *operand, std::string op): operand(operand), op(std::move(op)) {}

        std::any accept(NodeVisitor *visitor) override;
    };

    class BinaryOpNode : public OpNode {
    public:
        ExprNode *left, *right;
        std::shared_ptr<TypeInfo> leftType, rightType;
        std::string op;
        std::shared_ptr<SemFunction> func;

        BinaryOpNode(ExprNode *left,
                     ExprNode *right,
                     std::string op): left(left), right(right),
                                      op(std::move(op)) {}

        std::any accept(NodeVisitor *visitor) override;
    };

    class CompoundOpNode final : public BinaryOpNode {
    public:
        CompoundOpNode(ExprNode *left,
                       ExprNode *right,
                       const std::string &op): BinaryOpNode(left, right, op) {}

        std::any accept(NodeVisitor *visitor) override;
    };

    class IfNode final : public ExprNode {
    public:
        ExprNode *condition;
        ExprNode *thenBody;
        ExprNode *elseBody;

        IfNode(ExprNode *condition, ExprNode *thenBody, ExprNode *elseBody): condition(condition), thenBody(thenBody), elseBody(elseBody) {}

        std::any accept(NodeVisitor *visitor) override;
    };

    class WhileNode final : public ExprNode {
    public:
        ExprNode *condition, *body;

        WhileNode(ExprNode *condition, ExprNode *body): condition(condition), body(body) {}

        std::any accept(NodeVisitor *visitor) override;
    };

    class ForNode final : public ExprNode {
    public:
        ExprNode *init, *condition, *increment, *body;

        ForNode(ExprNode *init, ExprNode *condition, ExprNode *increment, ExprNode *body)
            : init(init), condition(condition), increment(increment), body(body) {}

        std::any accept(NodeVisitor *visitor) override;
    };

    class UnionNode final : public ExprNode {
    public:
        std::string name;
        std::vector<VarDeclNode *> members;
        std::shared_ptr<SemUnion> obj;

        UnionNode(std::string name, const std::vector<VarDeclNode *> &members): name(std::move(name)), members(members) {}

        std::any accept(NodeVisitor *visitor) override;
    };

    class EnumValue {
    public:
        std::string name;
        std::vector<ExprNode *> types;
    };

    class EnumNode final : public ExprNode {
    public:
        std::string name;
        std::vector<EnumValue> values;

        explicit EnumNode(std::string name, const std::vector<EnumValue> &values): name(std::move(name)), values(values) {}

        std::any accept(NodeVisitor *visitor) override;
    };
}
