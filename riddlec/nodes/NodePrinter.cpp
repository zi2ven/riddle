#include "NodePrinter.h"

#include <format>
#include <support/CPPUtils.h>

#define strVisit(x) std::any_cast<std::string>(visit(x))

std::any riddle::NodePrinter::visitInteger(IntegerNode *node) {
    return std::to_string(node->value);
}

std::any riddle::NodePrinter::visitFloat(FloatNode *node) {
    return std::to_string(node->value);
}

std::any riddle::NodePrinter::visitChar(CharNode *node) {
    return std::to_string(node->value);
}

std::any riddle::NodePrinter::visitVarDecl(VarDeclNode *node) {
    std::string value;
    std::string type = node->obj->type->name;
    if (node->value) {
        value = strVisit(node->value);
    }
    if (!node->value) {
        return std::format("var {}: {}", node->name, type);
    }
    return std::format("var {}: {} = {}", node->name, type, value);
}

std::any riddle::NodePrinter::visitObject(ObjectNode *node) {
    return node->name;
}

std::any riddle::NodePrinter::visitProgram(ProgramNode *node) {
    std::string str;
    for (const auto &i: node->body) {
        const auto result = strVisit(i);
        str += result;
        str.push_back('\n');
    }
    return str;
}

std::any riddle::NodePrinter::visitFuncDecl(FuncDeclNode *node) {
    std::string str = std::format("fun {}(", node->name);
    for (const auto &i: node->args) {
        str += strVisit(i) + ", ";
    }
    if (str.back() == ' ') {
        str.pop_back();
        str.pop_back();
    }
    str += std::format("): {}",strVisit(node->returnType));
    str += strVisit(node->body);
    return str;
}

std::any riddle::NodePrinter::visitArgDecl(ArgDeclNode *node) {
    const auto type = strVisit(node->type);
    return std::format("{}: {}", node->name, type);
}

std::any riddle::NodePrinter::visitBlock(BlockNode *node) {
    std::string str = "{\n";
    std::string tabs;
    depth++;
    for (int i = 0; i < depth; i++) {
        tabs += "    "; // four space
    }
    for (const auto &i: node->body) {
        const auto result = strVisit(i);
        str += tabs + result + "\n";
    }
    depth--;
    str += "}";
    return str;
}

std::any riddle::NodePrinter::visitCall(CallNode *node) {
    auto str = strVisit(node->value) + "(";
    for (const auto &i: node->args) {
        const auto result = strVisit(i);
        str += result + ", ";
    }
    if (str.back() == ' ') {
        str.pop_back();
        str.pop_back();
    }
    str += ')';
    return str;
}

std::any riddle::NodePrinter::visitReturn(ReturnNode *node) {
    std::string result;
    if (node->value) {
        result = strVisit(node);
    }
    return std::format("return {}", result);
}
