
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

  virtual void enterStatementEnd(RiddleParser::StatementEndContext * /*ctx*/) override { }
  virtual void exitStatementEnd(RiddleParser::StatementEndContext * /*ctx*/) override { }

  virtual void enterStatement(RiddleParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(RiddleParser::StatementContext * /*ctx*/) override { }

  virtual void enterFuncParam(RiddleParser::FuncParamContext * /*ctx*/) override { }
  virtual void exitFuncParam(RiddleParser::FuncParamContext * /*ctx*/) override { }

  virtual void enterFuncDecl(RiddleParser::FuncDeclContext * /*ctx*/) override { }
  virtual void exitFuncDecl(RiddleParser::FuncDeclContext * /*ctx*/) override { }

  virtual void enterVarDecl(RiddleParser::VarDeclContext * /*ctx*/) override { }
  virtual void exitVarDecl(RiddleParser::VarDeclContext * /*ctx*/) override { }

  virtual void enterFloatLit(RiddleParser::FloatLitContext * /*ctx*/) override { }
  virtual void exitFloatLit(RiddleParser::FloatLitContext * /*ctx*/) override { }

  virtual void enterIntLit(RiddleParser::IntLitContext * /*ctx*/) override { }
  virtual void exitIntLit(RiddleParser::IntLitContext * /*ctx*/) override { }

  virtual void enterBlockExpr(RiddleParser::BlockExprContext * /*ctx*/) override { }
  virtual void exitBlockExpr(RiddleParser::BlockExprContext * /*ctx*/) override { }

  virtual void enterCallExpr(RiddleParser::CallExprContext * /*ctx*/) override { }
  virtual void exitCallExpr(RiddleParser::CallExprContext * /*ctx*/) override { }

  virtual void enterCharLit(RiddleParser::CharLitContext * /*ctx*/) override { }
  virtual void exitCharLit(RiddleParser::CharLitContext * /*ctx*/) override { }

  virtual void enterObject(RiddleParser::ObjectContext * /*ctx*/) override { }
  virtual void exitObject(RiddleParser::ObjectContext * /*ctx*/) override { }

  virtual void enterBlock(RiddleParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(RiddleParser::BlockContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

