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
constexpr auto cast = [](const auto &ptr) {
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

any GramVisitor::visitProgram(RiddleParser::ProgramContext *context) {
    const auto program = make_shared<ProgramNode>();
    for (const auto i: context->children) {
        if (antlrcpp::is<antlr4::tree::TerminalNode *>(i)) {
            continue;
        }
        program->body.emplace_back(nodeVisit(i));
    }
    return toSNPtr(program);
}

any GramVisitor::visitFuncDecl(RiddleParser::FuncDeclContext *context) {
    const auto name = context->name->getText();
    shared_ptr<ExprNode> returnType = nullptr;
    if (context->return_type) {
        returnType = nodeVisit(context->return_type);
    }
    const auto body = cast<BlockNode>(nodeVisit(context->body));

    const auto node = make_shared<FuncDeclNode>(name, returnType, body);
    return toSNPtr(node);
}

any GramVisitor::visitBlock(RiddleParser::BlockContext *context) {
    const auto node = make_shared<BlockNode>();
    for (const auto i: context->children) {
        const auto result = nodeVisit(i);
        if (node != nullptr) {
            node->body.emplace_back(result);
        }
    }
    return toSNPtr(node);
}

std::any GramVisitor::visitInteger(RiddleParser::IntegerContext *context) {
    return toSNPtr(make_shared<IntegerNode>(stoi(context->getText())));
}

std::any GramVisitor::visitFloat(RiddleParser::FloatContext *context) {
    return toSNPtr(make_shared<FloatNode>(stod(context->getText())));
}
