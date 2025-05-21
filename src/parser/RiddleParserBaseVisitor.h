
// Generated from D:/Code/riddle/RiddleParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "RiddleParserVisitor.h"


/**
 * This class provides an empty implementation of RiddleParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  RiddleParserBaseVisitor : public RiddleParserVisitor {
public:

  virtual std::any visitProgram(RiddleParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionEnd(RiddleParser::ExpressionEndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLoadExpr(RiddleParser::LoadExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqOp(RiddleParser::EqOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitString(RiddleParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBitOr(RiddleParser::BitOrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicOr(RiddleParser::LogicOrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompoundAssignOp(RiddleParser::CompoundAssignOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryOp(RiddleParser::UnaryOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInteger(RiddleParser::IntegerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFloat(RiddleParser::FloatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenExpr(RiddleParser::ParenExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPointerTo(RiddleParser::PointerToContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicAnd(RiddleParser::LogicAndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCallExpr(RiddleParser::CallExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShiftOp(RiddleParser::ShiftOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemberAccess(RiddleParser::MemberAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddOp(RiddleParser::AddOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitScopeAccess(RiddleParser::ScopeAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelOp(RiddleParser::RelOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBitAnd(RiddleParser::BitAndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolean(RiddleParser::BooleanContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulOp(RiddleParser::MulOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBitXor(RiddleParser::BitXorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitChar(RiddleParser::CharContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatementExpr(RiddleParser::StatementExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObject(RiddleParser::ObjectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(RiddleParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPackStmt(RiddleParser::PackStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarDecl(RiddleParser::VarDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(RiddleParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitList(RiddleParser::InitListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclArgs(RiddleParser::DeclArgsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModifier(RiddleParser::ModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncDecl(RiddleParser::FuncDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStmt(RiddleParser::IfStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileStmt(RiddleParser::WhileStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForStmt(RiddleParser::ForStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnStmt(RiddleParser::ReturnStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassDecl(RiddleParser::ClassDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitId(RiddleParser::IdContext *ctx) override {
    return visitChildren(ctx);
  }


};

