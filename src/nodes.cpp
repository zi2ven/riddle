#include "nodes.h"
#include "nodes/NodeVisitor.h"

using namespace riddle;

std::any ProgramNode::accept(NodeVisitor *visitor) {
    return visitor->visitProgram(this);
}

std::any BlockNode::accept(NodeVisitor *visitor) {
    return visitor->visitBlock(this);
}

std::any ArgDeclNode::accept(NodeVisitor *visitor) {
    return visitor->visitArgDecl(this);
}

std::any FuncDeclNode::accept(NodeVisitor *visitor) {
    return visitor->visitFuncDecl(this);
}

std::any IntegerNode::accept(NodeVisitor *visitor) {
    return visitor->visitInteger(this);
}

std::any FloatNode::accept(NodeVisitor *visitor) {
    return visitor->visitFloat(this);
}

std::any ObjectNode::accept(NodeVisitor *visitor) {
    return visitor->visitObject(this);
}

std::any VarDeclNode::accept(NodeVisitor *visitor) {
    return visitor->visitVarDecl(this);
}

std::any ReturnNode::accept(NodeVisitor *visitor) {
    return visitor->visitReturn(this);
}

std::any CallNode::accept(NodeVisitor *visitor) {
    return visitor->visitCall(this);
}

std::any ClassDeclNode::accept(NodeVisitor *visitor) {
    return visitor->visitClassDecl(this);
}
