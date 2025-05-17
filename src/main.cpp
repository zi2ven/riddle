#include <antlr4-runtime.h>
#include <iostream>
#include "grammar/GramVisitor.h"
#include "parser/RiddleLexer.h"
#include "parser/RiddleParser.h"

int main(int argc, const char *argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <input>" << std::endl;
        return 1;
    }

    std::ifstream in(argv[1]);
    if (!in) {
        std::cerr << "Error: Unable to open file " << argv[1] << std::endl;
        return 1;
    }
    std::stringstream buffer;
    buffer << in.rdbuf();
    std::string code = buffer.str();
    antlr4::ANTLRInputStream input(code);
    RiddleLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    RiddleParser parser(&tokens);

    auto tree = parser.program();
    riddle::GramVisitor visitor;
    auto result = visitor.nodeVisit(tree);

    if (result) {
        std::cout << "Parsing succeeded." << std::endl;
    } else {
        std::cerr << "Parsing failed." << std::endl;
    }

    return 0;
}