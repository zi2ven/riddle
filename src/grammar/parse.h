#pragma once

#include "antlr4-runtime.h"
#include "parser/RiddleLexer.h"
#include "parser/RiddleParser.h"

inline auto parseCode(const std::string &code) {
    antlr4::ANTLRInputStream input(code);
    RiddleLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    RiddleParser parser(&tokens);
    return parser.program();
}
