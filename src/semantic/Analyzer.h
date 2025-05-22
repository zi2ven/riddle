#pragma once

#include <stack>
#include <unordered_map>
#include <unordered_set>

#include "nodes.h"
#include "nodes/NodeVisitor.h"

namespace riddle {
    class SemObject;
}

namespace riddle {
    class Analyzer final : public NodeVisitor {
        std::unordered_map<std::string, std::stack<std::shared_ptr<SemObject>>> symbols;
        std::stack<std::unordered_set<std::string>> locals;

        void joinScope();

        void leaveScope();

        void addGlobalObject(const std::shared_ptr<SemObject> &object);

    public:
        Analyzer();

        ~Analyzer() override;

        std::shared_ptr<SemObject> objVisit(ExprNode *node);

        std::shared_ptr<SemObject> objVisit(const std::shared_ptr<ExprNode>& node);

        std::any visitProgram(ProgramNode *node) override;

        std::any visitFuncDecl(FuncDeclNode *node) override;

        std::any visitBlock(BlockNode *node) override;

        std::any visitFloat(FloatNode *node) override;

        std::any visitInteger(IntegerNode *node) override;

        std::any visitObject(ObjectNode *node) override;

        std::any visitVarDecl(VarDeclNode *node) override;

        std::any visitArgDecl(ArgDeclNode *node) override;

        std::any visitReturn(ReturnNode *node) override;

        std::any visitCall(CallNode *node) override;

        std::any visitClassDecl(ClassDeclNode *node) override;

        std::any visitMemberAccess(MemberAccessNode *node) override;
    };
} // riddle
