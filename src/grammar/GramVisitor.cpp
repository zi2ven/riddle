#include "GramVisitor.h"

#include "nodes.h"

using namespace riddle;
using namespace std;

template<typename T>
shared_ptr<ExprNode> toSNPtr(const shared_ptr<T> &ptr) {
    static_assert(is_base_of_v<ExprNode, T>, "T must be derived from ExprNode");
    return dynamic_pointer_cast<ExprNode>(ptr);
}

template<typename T>
constexpr auto cast(const auto &ptr) {
    return dynamic_pointer_cast<T>(ptr);
};

shared_ptr<ExprNode> GramVisitor::nodeVisit(antlr4::tree::ParseTree *context) {
    const auto result = visit(context);
    try {
        if (!result.has_value()) {
            return nullptr;
        }
        return any_cast<shared_ptr<ExprNode>>(result);
    } catch (const bad_any_cast &e) {
        cout << e.what() << endl;
        return nullptr;
    }
}

any GramVisitor::visitExpressionEnd(RiddleParser::ExpressionEndContext *context) {
    return visit(context->children[0]);
}

any GramVisitor::visitProgram(RiddleParser::ProgramContext *context) {
    const auto program = make_shared<ProgramNode>();
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
    shared_ptr<ExprNode> returnType = nullptr;
    if (context->return_type) {
        returnType = nodeVisit(context->return_type);
    } else {
        returnType = make_shared<ObjectNode>("void");
    }
    const auto body = cast<BlockNode>(nodeVisit(context->body));
    const auto args = any_cast<vector<shared_ptr<ArgDeclNode>>>(visitDeclArgs(context->declArgs()));

    const auto node = make_shared<FuncDeclNode>(name, returnType, args, body);
    return toSNPtr(node);
}

any GramVisitor::visitBlock(RiddleParser::BlockContext *context) {
    const auto node = make_shared<BlockNode>();
    for (const auto i: context->children) {
        if (const auto result = nodeVisit(i); result != nullptr) {
            node->body.emplace_back(result);
        }
    }
    return toSNPtr(node);
}

any GramVisitor::visitInteger(RiddleParser::IntegerContext *context) {
    return toSNPtr(make_shared<IntegerNode>(stoi(context->getText())));
}

any GramVisitor::visitFloat(RiddleParser::FloatContext *context) {
    return toSNPtr(make_shared<FloatNode>(stod(context->getText())));
}

any GramVisitor::visitObject(RiddleParser::ObjectContext *context) {
    return toSNPtr(make_shared<ObjectNode>(context->getText()));
}

any GramVisitor::visitVarDecl(RiddleParser::VarDeclContext *context) {
    string name = context->name->getText();
    shared_ptr<ExprNode> type = nullptr;
    shared_ptr<ExprNode> value = nullptr;
    if (context->type) {
        type = nodeVisit(context->type);
    }
    if (context->value) {
        value = nodeVisit(context->value);
    }
    return toSNPtr(make_shared<VarDeclNode>(name, type, value));
}

any GramVisitor::visitDeclArgs(RiddleParser::DeclArgsContext *context) {
    string name;
    shared_ptr<ExprNode> type = nullptr;
    vector<shared_ptr<ArgDeclNode>> args;
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
            args.emplace_back(make_shared<ArgDeclNode>(name, type));
        }
    }
    return args;
}

std::any GramVisitor::visitReturnStmt(RiddleParser::ReturnStmtContext *context) {
    shared_ptr<ExprNode> value = nullptr;
    if (context->result) {
        value = nodeVisit(context->result);
    }
    return toSNPtr(make_shared<ReturnNode>(value));
}

std::any GramVisitor::visitCallExpr(RiddleParser::CallExprContext *context) {
    const auto value = nodeVisit(context->obj);
    vector<shared_ptr<ExprNode>> args;
    for (int i = 1; i < context->children.size(); i++) {
        const auto tree = context->children[i];
        if (tree->getTreeType() == antlr4::tree::ParseTreeType::TERMINAL) {
            continue;
        }
        args.emplace_back(nodeVisit(tree));
    }
    return toSNPtr(make_shared<CallNode>(value, args));
}
