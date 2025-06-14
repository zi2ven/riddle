#include <antlr4-runtime.h>
#include <chrono>
#include <filesystem>
#include <iostream>
#include <llvm-c/Target.h>

#include "args.h"
#include "generate/config.h"
#include "generate/Generate.h"
#include "grammar/GramVisitor.h"
#include "nodes/NodePrinter.h"
#include "parser/RiddleLexer.h"
#include "semantic/Analyzer.h"

void init() {
    riddle::globalContext = std::make_shared<llvm::LLVMContext>();
}


int main(int argc, char **argv) {
    if (!riddle::parseArgs(argc, argv)) {
        return -1;
    }

    std::ifstream in(riddle::build_args.inputFiles[0]);

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

    try {
        riddle::Analyzer analyzer;
        analyzer.visit(result);

        init();
        riddle::Generate generate;
        generate.info->triple = llvm::Triple(riddle::build_args.triple);
        generate.visit(result);
        generate.info->buildToFile();
    } catch (std::exception &e) {
        std::cerr << e.what();
        return 0;
    }
}
