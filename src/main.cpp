#include <antlr4-runtime.h>
#include <iostream>
#include <filesystem>
#include <chrono>
#include <llvm/Support/raw_ostream.h>
#include <llvm/Support/Signals.h>
#include <llvm-c/Target.h>
#include <lld/Common/Driver.h>
#include <llvm/Support/FileSystem.h>

#include "generate/Generate.h"
#include "generate/config.h"
#include "generate/SerachDirs.h"
#include "grammar/GramVisitor.h"
#include "nodes/NodePrinter.h"
#include "parser/RiddleLexer.h"
#include "semantic/Analyzer.h"

void init() {
    riddle::globalContext = std::make_shared<llvm::LLVMContext>();
    LLVMInitializeNativeTarget();
    LLVMInitializeNativeAsmPrinter();
}

LLD_HAS_DRIVER(mingw)

void link(const std::string &in, const std::string &out) {
    auto s = riddle::getCRT();
    s[3] = "-L" + s[3];
    const std::vector args = {
        "ld.lld",
        "--entry=main",
        "--subsystem=console",
        "-m",
        "i386pep",
        in.c_str(),
        "-o",
        out.c_str(),
        s[0].c_str(), s[1].c_str(), s[2].c_str(), s[3].c_str()
    };
    static constexpr lld::DriverDef drivers[] = {
        {lld::MinGW, &lld::mingw::link},
    };

    lld::lldMain(args, llvm::outs(), llvm::errs(), drivers);
}

int main(int argc, const char *argv[]) {
    llvm::sys::PrintStackTraceOnErrorSignal(argv[0]);
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
        generate.info->buildToFile("module.o");
        link("module.o", "out.exe");
        llvm::sys::fs::remove("module.o");
    } catch (std::exception &e) {
        std::cerr << e.what();
        return 0;
    }
}
