
#include "RiddleLexer.h"


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

    virtual std::any visitTerminator(RiddleParser::TerminatorContext *context) = 0;

    virtual std::any visitStatementEnd(RiddleParser::StatementEndContext *context) = 0;

    virtual std::any visitStatement(RiddleParser::StatementContext *context) = 0;

    virtual std::any visitExpression(RiddleParser::ExpressionContext *context) = 0;

    virtual std::any visitIntLit(RiddleParser::IntLitContext *context) = 0;

    virtual std::any visitFloatLit(RiddleParser::FloatLitContext *context) = 0;


};

