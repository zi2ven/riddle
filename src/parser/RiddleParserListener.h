
// Generated from D:/Code/riddle/RiddleParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "RiddleParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by RiddleParser.
 */
class  RiddleParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(RiddleParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(RiddleParser::ProgramContext *ctx) = 0;

  virtual void enterExpressionEnd(RiddleParser::ExpressionEndContext *ctx) = 0;
  virtual void exitExpressionEnd(RiddleParser::ExpressionEndContext *ctx) = 0;

  virtual void enterLoadExpr(RiddleParser::LoadExprContext *ctx) = 0;
  virtual void exitLoadExpr(RiddleParser::LoadExprContext *ctx) = 0;

  virtual void enterMemberAccess(RiddleParser::MemberAccessContext *ctx) = 0;
  virtual void exitMemberAccess(RiddleParser::MemberAccessContext *ctx) = 0;

  virtual void enterEqOp(RiddleParser::EqOpContext *ctx) = 0;
  virtual void exitEqOp(RiddleParser::EqOpContext *ctx) = 0;

  virtual void enterBracketExpr(RiddleParser::BracketExprContext *ctx) = 0;
  virtual void exitBracketExpr(RiddleParser::BracketExprContext *ctx) = 0;

  virtual void enterBitOr(RiddleParser::BitOrContext *ctx) = 0;
  virtual void exitBitOr(RiddleParser::BitOrContext *ctx) = 0;

  virtual void enterLogicOr(RiddleParser::LogicOrContext *ctx) = 0;
  virtual void exitLogicOr(RiddleParser::LogicOrContext *ctx) = 0;

  virtual void enterAddOp(RiddleParser::AddOpContext *ctx) = 0;
  virtual void exitAddOp(RiddleParser::AddOpContext *ctx) = 0;

  virtual void enterCompoundAssignOp(RiddleParser::CompoundAssignOpContext *ctx) = 0;
  virtual void exitCompoundAssignOp(RiddleParser::CompoundAssignOpContext *ctx) = 0;

  virtual void enterUnaryOp(RiddleParser::UnaryOpContext *ctx) = 0;
  virtual void exitUnaryOp(RiddleParser::UnaryOpContext *ctx) = 0;

  virtual void enterInteger(RiddleParser::IntegerContext *ctx) = 0;
  virtual void exitInteger(RiddleParser::IntegerContext *ctx) = 0;

  virtual void enterFloat(RiddleParser::FloatContext *ctx) = 0;
  virtual void exitFloat(RiddleParser::FloatContext *ctx) = 0;

  virtual void enterScopeAccess(RiddleParser::ScopeAccessContext *ctx) = 0;
  virtual void exitScopeAccess(RiddleParser::ScopeAccessContext *ctx) = 0;

  virtual void enterRelOp(RiddleParser::RelOpContext *ctx) = 0;
  virtual void exitRelOp(RiddleParser::RelOpContext *ctx) = 0;

  virtual void enterPointerTo(RiddleParser::PointerToContext *ctx) = 0;
  virtual void exitPointerTo(RiddleParser::PointerToContext *ctx) = 0;

  virtual void enterBitAnd(RiddleParser::BitAndContext *ctx) = 0;
  virtual void exitBitAnd(RiddleParser::BitAndContext *ctx) = 0;

  virtual void enterLogicAnd(RiddleParser::LogicAndContext *ctx) = 0;
  virtual void exitLogicAnd(RiddleParser::LogicAndContext *ctx) = 0;

  virtual void enterBoolean(RiddleParser::BooleanContext *ctx) = 0;
  virtual void exitBoolean(RiddleParser::BooleanContext *ctx) = 0;

  virtual void enterMulOp(RiddleParser::MulOpContext *ctx) = 0;
  virtual void exitMulOp(RiddleParser::MulOpContext *ctx) = 0;

  virtual void enterBitXor(RiddleParser::BitXorContext *ctx) = 0;
  virtual void exitBitXor(RiddleParser::BitXorContext *ctx) = 0;

  virtual void enterStatementExpr(RiddleParser::StatementExprContext *ctx) = 0;
  virtual void exitStatementExpr(RiddleParser::StatementExprContext *ctx) = 0;

  virtual void enterCallExpr(RiddleParser::CallExprContext *ctx) = 0;
  virtual void exitCallExpr(RiddleParser::CallExprContext *ctx) = 0;

  virtual void enterObject(RiddleParser::ObjectContext *ctx) = 0;
  virtual void exitObject(RiddleParser::ObjectContext *ctx) = 0;

  virtual void enterShiftOp(RiddleParser::ShiftOpContext *ctx) = 0;
  virtual void exitShiftOp(RiddleParser::ShiftOpContext *ctx) = 0;

  virtual void enterStatement(RiddleParser::StatementContext *ctx) = 0;
  virtual void exitStatement(RiddleParser::StatementContext *ctx) = 0;

  virtual void enterPackStmt(RiddleParser::PackStmtContext *ctx) = 0;
  virtual void exitPackStmt(RiddleParser::PackStmtContext *ctx) = 0;

  virtual void enterVarDecl(RiddleParser::VarDeclContext *ctx) = 0;
  virtual void exitVarDecl(RiddleParser::VarDeclContext *ctx) = 0;

  virtual void enterBlock(RiddleParser::BlockContext *ctx) = 0;
  virtual void exitBlock(RiddleParser::BlockContext *ctx) = 0;

  virtual void enterInitList(RiddleParser::InitListContext *ctx) = 0;
  virtual void exitInitList(RiddleParser::InitListContext *ctx) = 0;

  virtual void enterDeclArgs(RiddleParser::DeclArgsContext *ctx) = 0;
  virtual void exitDeclArgs(RiddleParser::DeclArgsContext *ctx) = 0;

  virtual void enterModifier(RiddleParser::ModifierContext *ctx) = 0;
  virtual void exitModifier(RiddleParser::ModifierContext *ctx) = 0;

  virtual void enterFuncDecl(RiddleParser::FuncDeclContext *ctx) = 0;
  virtual void exitFuncDecl(RiddleParser::FuncDeclContext *ctx) = 0;

  virtual void enterIfStmt(RiddleParser::IfStmtContext *ctx) = 0;
  virtual void exitIfStmt(RiddleParser::IfStmtContext *ctx) = 0;

  virtual void enterWhileStmt(RiddleParser::WhileStmtContext *ctx) = 0;
  virtual void exitWhileStmt(RiddleParser::WhileStmtContext *ctx) = 0;

  virtual void enterForStmt(RiddleParser::ForStmtContext *ctx) = 0;
  virtual void exitForStmt(RiddleParser::ForStmtContext *ctx) = 0;

  virtual void enterReturnStmt(RiddleParser::ReturnStmtContext *ctx) = 0;
  virtual void exitReturnStmt(RiddleParser::ReturnStmtContext *ctx) = 0;

  virtual void enterClassDecl(RiddleParser::ClassDeclContext *ctx) = 0;
  virtual void exitClassDecl(RiddleParser::ClassDeclContext *ctx) = 0;

  virtual void enterId(RiddleParser::IdContext *ctx) = 0;
  virtual void exitId(RiddleParser::IdContext *ctx) = 0;


};

