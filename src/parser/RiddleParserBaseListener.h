
#include "RiddleLexer.h"


// Generated from D:/Code/riddle/RiddleParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "RiddleParserListener.h"


/**
 * This class provides an empty implementation of RiddleParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  RiddleParserBaseListener : public RiddleParserListener {
public:

  virtual void enterProgram(RiddleParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(RiddleParser::ProgramContext * /*ctx*/) override { }

  virtual void enterTerminator(RiddleParser::TerminatorContext * /*ctx*/) override { }
  virtual void exitTerminator(RiddleParser::TerminatorContext * /*ctx*/) override { }

  virtual void enterExpressionEnd(RiddleParser::ExpressionEndContext * /*ctx*/) override { }
  virtual void exitExpressionEnd(RiddleParser::ExpressionEndContext * /*ctx*/) override { }

  virtual void enterLoadExpr(RiddleParser::LoadExprContext * /*ctx*/) override { }
  virtual void exitLoadExpr(RiddleParser::LoadExprContext * /*ctx*/) override { }

  virtual void enterEqOp(RiddleParser::EqOpContext * /*ctx*/) override { }
  virtual void exitEqOp(RiddleParser::EqOpContext * /*ctx*/) override { }

  virtual void enterString(RiddleParser::StringContext * /*ctx*/) override { }
  virtual void exitString(RiddleParser::StringContext * /*ctx*/) override { }

  virtual void enterBitOr(RiddleParser::BitOrContext * /*ctx*/) override { }
  virtual void exitBitOr(RiddleParser::BitOrContext * /*ctx*/) override { }

  virtual void enterLogicOr(RiddleParser::LogicOrContext * /*ctx*/) override { }
  virtual void exitLogicOr(RiddleParser::LogicOrContext * /*ctx*/) override { }

  virtual void enterCompoundAssignOp(RiddleParser::CompoundAssignOpContext * /*ctx*/) override { }
  virtual void exitCompoundAssignOp(RiddleParser::CompoundAssignOpContext * /*ctx*/) override { }

  virtual void enterUnaryOp(RiddleParser::UnaryOpContext * /*ctx*/) override { }
  virtual void exitUnaryOp(RiddleParser::UnaryOpContext * /*ctx*/) override { }

  virtual void enterInteger(RiddleParser::IntegerContext * /*ctx*/) override { }
  virtual void exitInteger(RiddleParser::IntegerContext * /*ctx*/) override { }

  virtual void enterFloat(RiddleParser::FloatContext * /*ctx*/) override { }
  virtual void exitFloat(RiddleParser::FloatContext * /*ctx*/) override { }

  virtual void enterParenExpr(RiddleParser::ParenExprContext * /*ctx*/) override { }
  virtual void exitParenExpr(RiddleParser::ParenExprContext * /*ctx*/) override { }

  virtual void enterPointerTo(RiddleParser::PointerToContext * /*ctx*/) override { }
  virtual void exitPointerTo(RiddleParser::PointerToContext * /*ctx*/) override { }

  virtual void enterLogicAnd(RiddleParser::LogicAndContext * /*ctx*/) override { }
  virtual void exitLogicAnd(RiddleParser::LogicAndContext * /*ctx*/) override { }

  virtual void enterCallExpr(RiddleParser::CallExprContext * /*ctx*/) override { }
  virtual void exitCallExpr(RiddleParser::CallExprContext * /*ctx*/) override { }

  virtual void enterShiftOp(RiddleParser::ShiftOpContext * /*ctx*/) override { }
  virtual void exitShiftOp(RiddleParser::ShiftOpContext * /*ctx*/) override { }

  virtual void enterMemberAccess(RiddleParser::MemberAccessContext * /*ctx*/) override { }
  virtual void exitMemberAccess(RiddleParser::MemberAccessContext * /*ctx*/) override { }

  virtual void enterAddOp(RiddleParser::AddOpContext * /*ctx*/) override { }
  virtual void exitAddOp(RiddleParser::AddOpContext * /*ctx*/) override { }

  virtual void enterScopeAccess(RiddleParser::ScopeAccessContext * /*ctx*/) override { }
  virtual void exitScopeAccess(RiddleParser::ScopeAccessContext * /*ctx*/) override { }

  virtual void enterRelOp(RiddleParser::RelOpContext * /*ctx*/) override { }
  virtual void exitRelOp(RiddleParser::RelOpContext * /*ctx*/) override { }

  virtual void enterBitAnd(RiddleParser::BitAndContext * /*ctx*/) override { }
  virtual void exitBitAnd(RiddleParser::BitAndContext * /*ctx*/) override { }

  virtual void enterBoolean(RiddleParser::BooleanContext * /*ctx*/) override { }
  virtual void exitBoolean(RiddleParser::BooleanContext * /*ctx*/) override { }

  virtual void enterMulOp(RiddleParser::MulOpContext * /*ctx*/) override { }
  virtual void exitMulOp(RiddleParser::MulOpContext * /*ctx*/) override { }

  virtual void enterBitXor(RiddleParser::BitXorContext * /*ctx*/) override { }
  virtual void exitBitXor(RiddleParser::BitXorContext * /*ctx*/) override { }

  virtual void enterChar(RiddleParser::CharContext * /*ctx*/) override { }
  virtual void exitChar(RiddleParser::CharContext * /*ctx*/) override { }

  virtual void enterStatementExpr(RiddleParser::StatementExprContext * /*ctx*/) override { }
  virtual void exitStatementExpr(RiddleParser::StatementExprContext * /*ctx*/) override { }

  virtual void enterObject(RiddleParser::ObjectContext * /*ctx*/) override { }
  virtual void exitObject(RiddleParser::ObjectContext * /*ctx*/) override { }

  virtual void enterStatement(RiddleParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(RiddleParser::StatementContext * /*ctx*/) override { }

  virtual void enterEnumValue(RiddleParser::EnumValueContext * /*ctx*/) override { }
  virtual void exitEnumValue(RiddleParser::EnumValueContext * /*ctx*/) override { }

  virtual void enterEnumStmt(RiddleParser::EnumStmtContext * /*ctx*/) override { }
  virtual void exitEnumStmt(RiddleParser::EnumStmtContext * /*ctx*/) override { }

  virtual void enterAnnotation(RiddleParser::AnnotationContext * /*ctx*/) override { }
  virtual void exitAnnotation(RiddleParser::AnnotationContext * /*ctx*/) override { }

  virtual void enterPackStmt(RiddleParser::PackStmtContext * /*ctx*/) override { }
  virtual void exitPackStmt(RiddleParser::PackStmtContext * /*ctx*/) override { }

  virtual void enterVarDecl(RiddleParser::VarDeclContext * /*ctx*/) override { }
  virtual void exitVarDecl(RiddleParser::VarDeclContext * /*ctx*/) override { }

  virtual void enterBlock(RiddleParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(RiddleParser::BlockContext * /*ctx*/) override { }

  virtual void enterInitList(RiddleParser::InitListContext * /*ctx*/) override { }
  virtual void exitInitList(RiddleParser::InitListContext * /*ctx*/) override { }

  virtual void enterDeclArgs(RiddleParser::DeclArgsContext * /*ctx*/) override { }
  virtual void exitDeclArgs(RiddleParser::DeclArgsContext * /*ctx*/) override { }

  virtual void enterModifierList(RiddleParser::ModifierListContext * /*ctx*/) override { }
  virtual void exitModifierList(RiddleParser::ModifierListContext * /*ctx*/) override { }

  virtual void enterModifier(RiddleParser::ModifierContext * /*ctx*/) override { }
  virtual void exitModifier(RiddleParser::ModifierContext * /*ctx*/) override { }

  virtual void enterFuncDecl(RiddleParser::FuncDeclContext * /*ctx*/) override { }
  virtual void exitFuncDecl(RiddleParser::FuncDeclContext * /*ctx*/) override { }

  virtual void enterIfStmt(RiddleParser::IfStmtContext * /*ctx*/) override { }
  virtual void exitIfStmt(RiddleParser::IfStmtContext * /*ctx*/) override { }

  virtual void enterWhileStmt(RiddleParser::WhileStmtContext * /*ctx*/) override { }
  virtual void exitWhileStmt(RiddleParser::WhileStmtContext * /*ctx*/) override { }

  virtual void enterForStmt(RiddleParser::ForStmtContext * /*ctx*/) override { }
  virtual void exitForStmt(RiddleParser::ForStmtContext * /*ctx*/) override { }

  virtual void enterReturnStmt(RiddleParser::ReturnStmtContext * /*ctx*/) override { }
  virtual void exitReturnStmt(RiddleParser::ReturnStmtContext * /*ctx*/) override { }

  virtual void enterClassDecl(RiddleParser::ClassDeclContext * /*ctx*/) override { }
  virtual void exitClassDecl(RiddleParser::ClassDeclContext * /*ctx*/) override { }

  virtual void enterUnionDecl(RiddleParser::UnionDeclContext * /*ctx*/) override { }
  virtual void exitUnionDecl(RiddleParser::UnionDeclContext * /*ctx*/) override { }

  virtual void enterId(RiddleParser::IdContext * /*ctx*/) override { }
  virtual void exitId(RiddleParser::IdContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

