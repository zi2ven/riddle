
// Generated from D:/Code/riddle/RiddleParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "RiddleParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by RiddleParser.
 */
class  RiddleParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by RiddleParser.
   */
    virtual std::any visitProgram(RiddleParser::ProgramContext *context) = 0;

    virtual std::any visitExpressionEnd(RiddleParser::ExpressionEndContext *context) = 0;

    virtual std::any visitLoadExpr(RiddleParser::LoadExprContext *context) = 0;

    virtual std::any visitMemberAccess(RiddleParser::MemberAccessContext *context) = 0;

    virtual std::any visitEqOp(RiddleParser::EqOpContext *context) = 0;

    virtual std::any visitBracketExpr(RiddleParser::BracketExprContext *context) = 0;

    virtual std::any visitBitOr(RiddleParser::BitOrContext *context) = 0;

    virtual std::any visitLogicOr(RiddleParser::LogicOrContext *context) = 0;

    virtual std::any visitAddOp(RiddleParser::AddOpContext *context) = 0;

    virtual std::any visitCompoundAssignOp(RiddleParser::CompoundAssignOpContext *context) = 0;

    virtual std::any visitUnaryOp(RiddleParser::UnaryOpContext *context) = 0;

    virtual std::any visitInteger(RiddleParser::IntegerContext *context) = 0;

    virtual std::any visitFloat(RiddleParser::FloatContext *context) = 0;

    virtual std::any visitScopeAccess(RiddleParser::ScopeAccessContext *context) = 0;

    virtual std::any visitRelOp(RiddleParser::RelOpContext *context) = 0;

    virtual std::any visitPointerTo(RiddleParser::PointerToContext *context) = 0;

    virtual std::any visitBitAnd(RiddleParser::BitAndContext *context) = 0;

    virtual std::any visitLogicAnd(RiddleParser::LogicAndContext *context) = 0;

    virtual std::any visitBoolean(RiddleParser::BooleanContext *context) = 0;

    virtual std::any visitMulOp(RiddleParser::MulOpContext *context) = 0;

    virtual std::any visitBitXor(RiddleParser::BitXorContext *context) = 0;

    virtual std::any visitStatementExpr(RiddleParser::StatementExprContext *context) = 0;

    virtual std::any visitCallExpr(RiddleParser::CallExprContext *context) = 0;

    virtual std::any visitObject(RiddleParser::ObjectContext *context) = 0;

    virtual std::any visitShiftOp(RiddleParser::ShiftOpContext *context) = 0;

    virtual std::any visitStatement(RiddleParser::StatementContext *context) = 0;

    virtual std::any visitPackStmt(RiddleParser::PackStmtContext *context) = 0;

    virtual std::any visitVarDecl(RiddleParser::VarDeclContext *context) = 0;

    virtual std::any visitBlock(RiddleParser::BlockContext *context) = 0;

    virtual std::any visitInitList(RiddleParser::InitListContext *context) = 0;

    virtual std::any visitDeclArgs(RiddleParser::DeclArgsContext *context) = 0;

    virtual std::any visitModifier(RiddleParser::ModifierContext *context) = 0;

    virtual std::any visitFuncDecl(RiddleParser::FuncDeclContext *context) = 0;

    virtual std::any visitIfStmt(RiddleParser::IfStmtContext *context) = 0;

    virtual std::any visitWhileStmt(RiddleParser::WhileStmtContext *context) = 0;

    virtual std::any visitForStmt(RiddleParser::ForStmtContext *context) = 0;

    virtual std::any visitReturnStmt(RiddleParser::ReturnStmtContext *context) = 0;

    virtual std::any visitClassDecl(RiddleParser::ClassDeclContext *context) = 0;

    virtual std::any visitId(RiddleParser::IdContext *context) = 0;


};

