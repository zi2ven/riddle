#include "nodes.h"

std::any riddle::NodeVisitor::visit(ExprNode *node) {
    return node->accept(this);
}

std::any riddle::NodeVisitor::visit(const std::shared_ptr<ExprNode> &node) {
    return node->accept(this);
}
