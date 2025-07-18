
#include "RiddleLexer.h"


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

  virtual std::any visitTerminator(RiddleParser::TerminatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatementEnd(RiddleParser::StatementEndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(RiddleParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(RiddleParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntLit(RiddleParser::IntLitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFloatLit(RiddleParser::FloatLitContext *ctx) override {
    return visitChildren(ctx);
  }


};

