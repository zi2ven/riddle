parser grammar RiddleParser;

options {
    tokenVocab=RiddleLexer;
}

@header{
#include "RiddleLexer.h"
}

@parser::members {
    bool lineTerminatorAhead() {
        ssize_t i = 1;  // 从当前token的前一个开始
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
    ;

expression
    : literal
    ;

literal
    : Decimal #intLit
    | Float   #floatLit
    ;