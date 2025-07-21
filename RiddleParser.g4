parser grammar RiddleParser;

options {
    tokenVocab=RiddleLexer;
}

@header{
#include "RiddleLexer.h"
}

@parser::members {
    bool lineTerminatorAhead() {
        ssize_t i = 1;
        auto* tokens = dynamic_cast<antlr4::BufferedTokenStream*>(_input);

        std::vector<antlr4::Token*> hidden = tokens->getHiddenTokensToLeft(_input->index());
        for (auto idx : hidden) {
            if (idx->getType() == RiddleLexer::Endl) {
              return true;
            }
        }
        return false;
    }
}

program
    : statementEnd+ EOF
    ;

terminator
    : Semi
    | EOF
    | { lineTerminatorAhead() }?
    ;

statementEnd
    : statement terminator
    | Endl
    ;

statement
    : expression
    | varDecl
    | funcDecl
    ;

funcParam
    : name=Identifier Colon type=expression
    ;

funcDecl
    : Fun name=Identifier LeftParen (funcParam (Comma funcParam)*)? RightParen Sub Greater returnType=expression body=block
    ;

varDecl
    : Var name=Identifier (Colon type=expression)? (Assign value=expression)?
    | Val name=Identifier (Colon type=expression)? (Assign value=expression)?
    ;

expression
    : func=expression LeftParen (expression (Comma expression)*)? RightParen #callExpr
    | Identifier    #object
    | block         #blockExpr
    | Decimal       #intLit
    | Float         #floatLit
    | CHAR          #charLit
    ;

block: LeftCurly statementEnd* RightCurly;