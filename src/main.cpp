#include <antlr4-runtime.h>
#include <chrono>
#include <filesystem>
#include <iostream>
#include <llvm/Support/Signals.h>
#include <llvm-c/Target.h>

#include "generate/config.h"
#include "generate/Generate.h"
#include "grammar/GramVisitor.h"
#include "nodes/NodePrinter.h"
#include "parser/RiddleLexer.h"
#include "semantic/Analyzer.h"

void init() {
    riddle::globalContext = std::make_shared<llvm::LLVMContext>();
    LLVMInitializeNativeTarget();
    LLVMInitializeNativeAsmPrinter();
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
    code.push_back('\n');
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
        generate.visit(result);
        generate.info->buildToFile("module");
    } catch (std::exception &e) {
        std::cerr << e.what();
        return 0;
    }
}
