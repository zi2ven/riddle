
#include "RiddleLexer.h"


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

  virtual void enterTerminator(RiddleParser::TerminatorContext *ctx) = 0;
  virtual void exitTerminator(RiddleParser::TerminatorContext *ctx) = 0;

  virtual void enterStatementEnd(RiddleParser::StatementEndContext *ctx) = 0;
  virtual void exitStatementEnd(RiddleParser::StatementEndContext *ctx) = 0;

  virtual void enterStatement(RiddleParser::StatementContext *ctx) = 0;
  virtual void exitStatement(RiddleParser::StatementContext *ctx) = 0;

  virtual void enterVarDecl(RiddleParser::VarDeclContext *ctx) = 0;
  virtual void exitVarDecl(RiddleParser::VarDeclContext *ctx) = 0;

  virtual void enterExpression(RiddleParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(RiddleParser::ExpressionContext *ctx) = 0;

  virtual void enterObject(RiddleParser::ObjectContext *ctx) = 0;
  virtual void exitObject(RiddleParser::ObjectContext *ctx) = 0;

  virtual void enterIntLit(RiddleParser::IntLitContext *ctx) = 0;
  virtual void exitIntLit(RiddleParser::IntLitContext *ctx) = 0;

  virtual void enterFloatLit(RiddleParser::FloatLitContext *ctx) = 0;
  virtual void exitFloatLit(RiddleParser::FloatLitContext *ctx) = 0;

  virtual void enterCharLit(RiddleParser::CharLitContext *ctx) = 0;
  virtual void exitCharLit(RiddleParser::CharLitContext *ctx) = 0;


};

