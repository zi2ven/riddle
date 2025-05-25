#include "GramVisitor.h"

#include <stacktrace>

#include "nodes.h"

using namespace riddle;
using namespace std;

inline ExprNode *toSNPtr(ExprNode *node) {
    return node;
}

template<typename T>
inline T *cast(ExprNode *node) {
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
    const auto program = new ProgramNode;
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

    const auto node = new FuncDeclNode(name, returnType, args, body);
    return toSNPtr(node);
}

any GramVisitor::visitBlock(RiddleParser::BlockContext *context) {
    const auto node = new BlockNode();
    for (const auto i: context->children) {
        if (const auto result = nodeVisit(i); result != nullptr) {
            node->body.emplace_back(result);
        }
    }
    return toSNPtr(node);
}

any GramVisitor::visitInteger(RiddleParser::IntegerContext *context) {
    return toSNPtr(new IntegerNode(stoi(context->getText())));
}

any GramVisitor::visitFloat(RiddleParser::FloatContext *context) {
    return toSNPtr(new FloatNode(stod(context->getText())));
}

std::any GramVisitor::visitChar(RiddleParser::CharContext *context) {
    auto lit = context->getText();
    lit = lit.substr(1, lit.size() - 2);
    return toSNPtr(new CharNode(parseCharLiteral(lit)));
}

any GramVisitor::visitObject(RiddleParser::ObjectContext *context) {
    return toSNPtr(new ObjectNode(context->getText()));
}

any GramVisitor::visitVarDecl(RiddleParser::VarDeclContext *context) {
    string name = context->name->getText();
    ExprNode *type = nullptr;
    ExprNode *value = nullptr;
    if (context->type) {
        type = nodeVisit(context->type);
    }
    if (context->value) {
        value = nodeVisit(context->value);
    }
    return toSNPtr(new VarDeclNode(name, type, value));
}

any GramVisitor::visitDeclArgs(RiddleParser::DeclArgsContext *context) {
    string name;
    ExprNode *type = nullptr;
    vector<ArgDeclNode*> args;
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
            args.emplace_back(new ArgDeclNode(name, type));
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
    return toSNPtr(new ReturnNode(value));
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
    return toSNPtr(new CallNode(value, args));
}

std::any GramVisitor::visitClassDecl(RiddleParser::ClassDeclContext *context) {
    const auto name = context->name->getText();
    std::vector<VarDeclNode*> members;
    std::vector<FuncDeclNode*> methods;
    const auto body = cast<BlockNode>(nodeVisit(context->body));
    for (const auto &i: body->body) {
        if (const auto varDecl = cast<VarDeclNode>(i)) {
            members.emplace_back(varDecl);
        } else if (const auto funcDecl = cast<FuncDeclNode>(i)) {
            methods.emplace_back(funcDecl);
        }
    }
    return toSNPtr(new ClassDeclNode(name, members, methods));
}

std::any GramVisitor::visitMemberAccess(RiddleParser::MemberAccessContext *context) {
    const auto left = nodeVisit(context->left);
    const auto right = context->right->getText();
    return toSNPtr(new MemberAccessNode(left, right));
}

std::any GramVisitor::visitPointerTo(RiddleParser::PointerToContext *context) {
    const auto type = nodeVisit(context->obj);
    return toSNPtr(new PointerToNode(type));
}

std::any GramVisitor::visitParenExpr(RiddleParser::ParenExprContext *context) {
    return visit(context->value);
}

#define binaryOp() \
    const auto left = nodeVisit(context->left); \
    const auto right = nodeVisit(context->right); \
    const auto op = context->op->getText(); \
    return toSNPtr(new BinaryOpNode(left, right, op));

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
