#include "args.h"

#include <llvm/Support/CommandLine.h>
#include <llvm/TargetParser/Host.h>

using namespace llvm;

cl::OptionCategory RiddleToolCategory("Riddle Tool Options");

cl::list<std::string> InputFileNames(
    cl::Positional,
    cl::OneOrMore,
    cl::Required,
    cl::desc("<input files>"),
    cl::cat(RiddleToolCategory)
);

cl::opt<std::string> OutFileNames(
    "o",
    cl::desc("Output file name"),
    cl::init(""),
    cl::cat(RiddleToolCategory)
);

cl::opt<std::string> TargetTriple(
    "target",
    cl::desc("Generate code for the given target"),
    cl::init(sys::getDefaultTargetTriple()),
    cl::cat(RiddleToolCategory)
);

cl::opt<std::string> LinkScript(
    "T",
    cl::desc("Linker script"),
    cl::init(""),
    cl::cat(RiddleToolCategory)
);

cl::opt<bool> CompileOnly(
    "c",
    cl::desc("Only compile"),
    cl::init(false),
    cl::cat(RiddleToolCategory)
);


void parseArgs(const int argc, char **argv) {
    cl::HideUnrelatedOptions(RiddleToolCategory);
    cl::ParseCommandLineOptions(argc, argv, "Riddle Compiler");
    build_args.inputFiles = InputFileNames;
    build_args.outFile = OutFileNames.getValue();
    build_args.triple = TargetTriple.getValue();
    build_args.linkerScript = LinkScript.getValue();
    build_args.compileOnly = CompileOnly;
}
