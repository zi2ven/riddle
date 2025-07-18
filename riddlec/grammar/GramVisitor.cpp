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

#include "GramVisitor.h"

#include <stacktrace>

#include "nodes.h"
#include "semantic/Annoataion.h"
#include "support/Trie.hpp"

using namespace riddle;
using namespace std;

inline ExprNode *toSNPtr(ExprNode *node) {
    return node;
}

template<typename T>
T *cast(ExprNode *node) {
    return dynamic_cast<T *>(node);
}

char parseCharLiteral(const std::string &body) {
    // 普通单字符
    if (body.size() == 1 && body[0] != '\\') {
        return body[0];
    }
    // 转义结构：以 '\' 开头
    if (body.size() >= 2 && body[0] == '\\') {
        switch (body[1]) {
            case 'n': return '\n';
            case 't': return '\t';
            case 'r': return '\r';
            case '\\': return '\\';
            case '\'': return '\'';
            case '"': return '"';
            case '0': return '\0';
            case 'x': // 16 进制：\xhh
            {
                // 取出 “hh” 部分
                const std::string hex = body.substr(2);
                int val;
                std::istringstream iss(hex);
                iss >> std::hex >> val;
                if (!iss.fail()) return static_cast<char>(val);
                break;
            }
            default: break;
        }
    }
    throw std::invalid_argument("Unsupported escape sequence: " + body);
}

ExprNode *GramVisitor::nodeVisit(antlr4::tree::ParseTree *context) {
    const auto result = visit(context);
    try {
        if (!result.has_value()) {
            return nullptr;
        }
        return any_cast<ExprNode *>(result);
    } catch (const bad_any_cast &e) {
        cout << e.what() << endl;
        return nullptr;
    }
}

any GramVisitor::visitExpressionEnd(RiddleParser::ExpressionEndContext *context) {
    return visit(context->children[0]);
}

any GramVisitor::visitProgram(RiddleParser::ProgramContext *context) {
    for (const auto i: context->children) {
        if (i->getTreeType() == antlr4::tree::ParseTreeType::TERMINAL) {
            continue;
        }
        const auto result = nodeVisit(i);
        if (result == nullptr) {
            continue;
        }
        program->body.emplace_back(result);
    }
    return toSNPtr(program);
}

std::any GramVisitor::visitModifierList(RiddleParser::ModifierListContext *context) {
    static Trie<Modifier::ModifierType> trie = {
        {"static", Modifier::Static},
    };
    Modifier modifier;
    for (const auto i: context->children) {
        const auto type = trie.get(i->getText());
        const auto value = type.or_else([context]-> std::optional<Modifier::ModifierType> {
            throw runtime_error("Unsupported modifier: " + context->getText());
        }).value();
        modifier.set(value, true);
    }
    return modifier;
}

any GramVisitor::visitFuncDecl(RiddleParser::FuncDeclContext *context) {
    const auto name = context->name->getText();
    ExprNode *returnType = nullptr;
    if (context->return_type) {
        returnType = nodeVisit(context->return_type);
    } else {
        returnType = new ObjectNode("void");
    }
    BlockNode *body = nullptr;
    if (context->body) body = cast<BlockNode>(nodeVisit(context->body));

    const auto args = any_cast<vector<ArgDeclNode *>>(visitDeclArgs(context->declArgs()));

    const auto node = new FuncDeclNode(name, returnType, args, context->declArgs()->isVar, body);
    node->modifier = any_cast<Modifier>(visitModifierList(context->modifierList()));
    if (context->annotation()) {
        node->annotation = any_cast<Annotation>(visitAnnotation(context->annotation()));
    }
    program->nodes.emplace_back(node);
    return toSNPtr(node);
}

any GramVisitor::visitBlock(RiddleParser::BlockContext *context) {
    const auto node = new BlockNode();
    for (const auto i: context->children) {
        if (const auto result = nodeVisit(i); result != nullptr) {
            node->body.emplace_back(result);
        }
    }
    program->nodes.emplace_back(node);
    return toSNPtr(node);
}

any GramVisitor::visitInteger(RiddleParser::IntegerContext *context) {
    const auto node = new IntegerNode(stoi(context->getText()));
    program->nodes.emplace_back(node);
    return toSNPtr(node);
}

any GramVisitor::visitFloat(RiddleParser::FloatContext *context) {
    const auto node = new FloatNode(stod(context->getText()));
    program->nodes.emplace_back(node);
    return toSNPtr(node);
}

std::any GramVisitor::visitChar(RiddleParser::CharContext *context) {
    auto lit = context->getText();
    lit = lit.substr(1, lit.size() - 2);
    const auto node = new CharNode(parseCharLiteral(lit));
    program->nodes.emplace_back(node);
    return toSNPtr(node);
}

std::any GramVisitor::visitBoolean(RiddleParser::BooleanContext *context) {
    const auto node = new BooleanNode(context->getText() == "true");
    program->nodes.emplace_back(node);
    return toSNPtr(node);
}

std::any GramVisitor::visitString(RiddleParser::StringContext *context) {
    string lit = context->getText();
    lit = lit.substr(1, lit.size() - 2);
    string result = "";
    const auto add = [&](const char c) {
        result.push_back(c);
    };
    for (size_t i = 0; i < lit.size(); i++) {
        const char ch = lit[i];
        if (ch == '\\') {
            switch (lit[++i]) {
                case 'n': add('\n');
                    break;
                case 't': add('\t');
                    break;
                case 'r': add('\r');
                    break;
                case 'b': add('\b');
                    break;
                case 'a': add('\a');
                    break;
                default: break;
            }
        } else {
            add(ch);
        }
    }
    const auto node = new StringNode(result);
    return toSNPtr(node);
}

any GramVisitor::visitObject(RiddleParser::ObjectContext *context) {
    const auto node = new ObjectNode(context->getText());
    program->nodes.emplace_back(node);
    return toSNPtr(node);
}

any GramVisitor::visitVarDecl(RiddleParser::VarDeclContext *context) {
    const string name = context->name->getText();
    ExprNode *type = nullptr;
    ExprNode *value = nullptr;
    const auto modifier = std::any_cast<Modifier>(visit(context->modifierList()));
    if (context->type) {
        type = nodeVisit(context->type);
    }
    if (context->value) {
        value = nodeVisit(context->value);
    }
    const auto node = new VarDeclNode(name, type, value);
    node->modifier = modifier;
    program->nodes.emplace_back(node);
    return toSNPtr(node);
}

any GramVisitor::visitDeclArgs(RiddleParser::DeclArgsContext *context) {
    string name;
    ExprNode *type = nullptr;
    vector<ArgDeclNode *> args;
    for (const auto i: context->children) {
        if (i->getTreeType() == antlr4::tree::ParseTreeType::TERMINAL) {
            continue;
        }
        if (antlrcpp::is<RiddleParser::IdContext *>(i)) {
            name = i->getText();
        } else {
            type = nodeVisit(i);
        }
        if (!name.empty() && type != nullptr) {
            const auto node = new ArgDeclNode(name, type);
            program->nodes.emplace_back(node);
            args.emplace_back(node);
            name.clear();
            type = nullptr;
        }
    }
    return args;
}

std::any GramVisitor::visitReturnStmt(RiddleParser::ReturnStmtContext *context) {
    ExprNode *value = nullptr;
    if (context->result) {
        value = nodeVisit(context->result);
    }
    const auto node = new ReturnNode(value);
    program->nodes.emplace_back(node);
    return toSNPtr(node);
}

std::any GramVisitor::visitCallExpr(RiddleParser::CallExprContext *context) {
    const auto value = nodeVisit(context->obj);
    vector<ExprNode *> args;
    for (int i = 1; i < context->children.size(); i++) {
        const auto tree = context->children[i];
        if (tree->getTreeType() == antlr4::tree::ParseTreeType::TERMINAL) {
            continue;
        }
        args.emplace_back(nodeVisit(tree));
    }
    const auto node = new CallNode(value, args);
    program->nodes.emplace_back(node);
    return toSNPtr(node);
}

std::any GramVisitor::visitClassDecl(RiddleParser::ClassDeclContext *context) {
    const auto name = context->name->getText();
    std::vector<VarDeclNode *> members;
    std::vector<FuncDeclNode *> methods;
    const auto body = cast<BlockNode>(nodeVisit(context->body));
    for (const auto &i: body->body) {
        if (const auto varDecl = cast<VarDeclNode>(i)) {
            members.emplace_back(varDecl);
        } else if (const auto funcDecl = cast<FuncDeclNode>(i)) {
            methods.emplace_back(funcDecl);
        }
    }
    const auto node = new ClassDeclNode(name, members, methods);
    program->nodes.emplace_back(node);
    return toSNPtr(node);
}

std::any GramVisitor::visitMemberAccess(RiddleParser::MemberAccessContext *context) {
    const auto left = nodeVisit(context->left);
    const auto right = context->right->getText();
    const auto node = new MemberAccessNode(left, right);
    program->nodes.emplace_back(node);
    return toSNPtr(node);
}

std::any GramVisitor::visitScopeAccess(RiddleParser::ScopeAccessContext *context) {
    const auto left = nodeVisit(context->left);
    const auto right = context->right->getText();
    const auto node = new MemberAccessNode(left, right, true);
    program->nodes.emplace_back(node);
    return toSNPtr(node);
}

std::any GramVisitor::visitPointerTo(RiddleParser::PointerToContext *context) {
    const auto type = nodeVisit(context->obj);
    const auto node = new PointerToNode(type);
    program->nodes.emplace_back(node);
    return toSNPtr(node);
}

std::any GramVisitor::visitParenExpr(RiddleParser::ParenExprContext *context) {
    return visit(context->value);
}

#define binaryOp()                                          \
    const auto left = nodeVisit(context->left);             \
    const auto right = nodeVisit(context->right);           \
    const auto op = context->op->getText();                 \
    const auto node = new BinaryOpNode(left, right, op);    \
    program->nodes.emplace_back(node);                      \
    return toSNPtr(node);

std::any GramVisitor::visitAddOp(RiddleParser::AddOpContext *context) {
    binaryOp()
}

std::any GramVisitor::visitLogicAnd(RiddleParser::LogicAndContext *context) {
    binaryOp()
}

std::any GramVisitor::visitLogicOr(RiddleParser::LogicOrContext *context) {
    binaryOp()
}

std::any GramVisitor::visitEqOp(RiddleParser::EqOpContext *context) {
    binaryOp()
}

std::any GramVisitor::visitBitAnd(RiddleParser::BitAndContext *context) {
    binaryOp()
}

std::any GramVisitor::visitBitOr(RiddleParser::BitOrContext *context) {
    binaryOp()
}

std::any GramVisitor::visitBitXor(RiddleParser::BitXorContext *context) {
    binaryOp()
}

std::any GramVisitor::visitUnaryOp(RiddleParser::UnaryOpContext *context) {
    const auto value = nodeVisit(context->value);
    const auto node = new UnaryOpNode(value, context->op->getText());
    program->nodes.emplace_back(node);
    return toSNPtr(node);
}

std::any GramVisitor::visitMulOp(RiddleParser::MulOpContext *context) {
    binaryOp()
}

std::any GramVisitor::visitRelOp(RiddleParser::RelOpContext *context) {
    binaryOp()
}

std::any GramVisitor::visitShiftOp(RiddleParser::ShiftOpContext *context) {
    binaryOp()
}

std::any GramVisitor::visitCompoundAssignOp(RiddleParser::CompoundAssignOpContext *context) {
    const auto left = nodeVisit(context->left);
    const auto right = nodeVisit(context->right);
    const auto op = context->op->getText();
    const auto node = new CompoundOpNode(left, right, op);
    program->nodes.emplace_back(node);
    return toSNPtr(node);
}

std::any GramVisitor::visitIfStmt(RiddleParser::IfStmtContext *context) {
    ExprNode *cond = nodeVisit(context->cond);
    ExprNode *then = nodeVisit(context->then);
    ExprNode *else_ = nullptr;
    if (context->else_) {
        else_ = nodeVisit(context->else_);
    }
    const auto node = new IfNode(cond, then, else_);
    program->nodes.emplace_back(node);
    return toSNPtr(node);
}

std::any GramVisitor::visitForStmt(RiddleParser::ForStmtContext *context) {
    ExprNode *init = nullptr, *condition = nullptr, *increment = nullptr;
    if (context->init) {
        init = nodeVisit(context->init);
    }
    if (context->cond) {
        condition = nodeVisit(context->cond);
    }
    if (context->change) {
        increment = nodeVisit(context->change);
    }
    ExprNode *body = nodeVisit(context->body);
    const auto node = new ForNode(init, condition, increment, body);
    program->nodes.emplace_back(node);
    return toSNPtr(node);
}

std::any GramVisitor::visitWhileStmt(RiddleParser::WhileStmtContext *context) {
    ExprNode *condition = nodeVisit(context->cond);
    ExprNode *body = nodeVisit(context->body);
    const auto node = new WhileNode(condition, body);
    program->nodes.emplace_back(node);
    return toSNPtr(node);
}

std::any GramVisitor::visitUnionDecl(RiddleParser::UnionDeclContext *context) {
    const auto name = context->name->getText();
    const auto body = dynamic_cast<BlockNode *>(nodeVisit(context->body));
    vector<VarDeclNode *> members;
    for (const auto i: body->body) {
        if (const auto var = dynamic_cast<VarDeclNode *>(i)) {
            members.emplace_back(var);
        }
    }
    const auto node = new UnionNode(name, members);
    program->nodes.emplace_back(node);
    return toSNPtr(node);
}

std::any GramVisitor::visitEnumValue(RiddleParser::EnumValueContext *context) {
    const std::string name = context->getText();
    if (context->hasType) {
        return EnumValue{name};
    }

    vector<ExprNode *> types;
    for (const auto i: context->children) {
        if (antlrcpp::is<RiddleParser::ExpressionContext *>(i)) {
            types.emplace_back(nodeVisit(i));
        }
    }
    return EnumValue{name, types};
}

std::any GramVisitor::visitEnumStmt(RiddleParser::EnumStmtContext *context) {
    const auto node = new EnumNode(context->name->getText(), {});
    program->nodes.emplace_back(node);
    for (const auto i: context->children) {
        if (antlrcpp::is<RiddleParser::EnumValueContext *>(i)) {
            const auto value = any_cast<EnumValue>(i);
            node->values.emplace_back(value);
        }
    }
    return toSNPtr(node);
}

std::any GramVisitor::visitAnnotation(RiddleParser::AnnotationContext *context) {
    const auto name = context->name->getText();
    vector<ExprNode *> expr;
    for (const auto i: context->children) {
        if (antlrcpp::is<RiddleParser::ExpressionContext *>(i)) {
            expr.push_back(nodeVisit(i));
        }
    }
    return Annotation(name, expr);
}
