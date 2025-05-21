#include <antlr4-runtime.h>
#include <iostream>
#include <chrono>

#include "generate/Generate.h"
#include "grammar/config.h"
#include "grammar/GramVisitor.h"
#include "parser/RiddleLexer.h"
#include "semantic/Analyzer.h"

void init() {
    riddle::globalContext = std::make_shared<llvm::LLVMContext>();
}

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
    auto startTime = std::chrono::high_resolution_clock::now();
    try {
        riddle::Analyzer analyzer;
        analyzer.visit(result);

        init();
        riddle::Generate generate;
        generate.visit(result);
    } catch (std::exception &e) {
        std::cerr << e.what();
        return 0;
    }
    auto endTime = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> elapsed = endTime - startTime;

    std::cout << "Parsing and analysis took " << std::fixed << elapsed.count() << " milliseconds." << std::endl;
    return 0;
}
