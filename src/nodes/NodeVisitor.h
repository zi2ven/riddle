#pragma once
#include <any>
#include <memory>

namespace riddle {
    class MemberAccessNode;
}

namespace riddle {
    class ClassDeclNode;
}

namespace riddle {
    class CallNode;
    class ReturnNode;
    class ArgDeclNode;
    class VarDeclNode;
    class ObjectNode;
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

        virtual std::any visit(const std::shared_ptr<ExprNode> &node);

        virtual std::any visitProgram(ProgramNode *node);

        virtual std::any visitBlock(BlockNode *node);

        virtual std::any visitArgDecl(ArgDeclNode *node);

        virtual std::any visitFuncDecl(FuncDeclNode *node);

        virtual std::any visitInteger(IntegerNode *node);

        virtual std::any visitFloat(FloatNode *node);

        virtual std::any visitObject(ObjectNode *node);

        virtual std::any visitVarDecl(VarDeclNode *node);

        virtual std::any visitReturn(ReturnNode *node);

        virtual std::any visitCall(CallNode* node);

        virtual std::any visitClassDecl(ClassDeclNode* node);

        virtual std::any visitMemberAccess(MemberAccessNode* node);
    };
}
