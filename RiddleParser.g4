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
    | classDecl
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

classDecl
    : Class name=Identifier declBlock
    ;

declBlock
    : (funcDecl | varDecl | classDecl)*
    ;

expression
    : func=expression LeftParen (expression (Comma expression)*)? RightParen #callExpr
    | Identifier        #object
    | block             #blockExpr
    | Decimal           #intLit
    | Float             #floatLit
    | CHAR              #charLit
    | (True | False)    #boolLit
    | LeftParen expression RightParen  #bracketExpr
    ;

block: LeftCurly statementEnd* RightCurly;