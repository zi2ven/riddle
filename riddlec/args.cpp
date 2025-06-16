#include "args.h"

#include <iostream>
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

cl::opt<bool> M32(
    "m32",
    cl::desc("Generate a 32-bit executable."),
    cl::init(false),
    cl::cat(RiddleToolCategory)
);

cl::opt<bool> M64(
    "m64",
    cl::desc("Generate a 64-bit executable."),
    cl::init(false),
    cl::cat(RiddleToolCategory)
);

cl::opt<bool> NoRedZone(
    "mno-red-zone",
    cl::desc("No red zone is used."),
    cl::init(false),
    cl::cat(RiddleToolCategory)
);

cl::opt<bool> No80387(
    "mno-80387",
    cl::desc("No 80387 (x87) floating point instruction stack is used."),
    cl::init(false),
    cl::cat(RiddleToolCategory)
);

cl::opt<bool> NoMMX(
    "mno-mmx",
    cl::desc("Disable the MMX instruction set."),
    cl::init(false),
    cl::cat(RiddleToolCategory)
);

cl::opt<bool> NoSSE(
    "mno-sse",
    cl::desc("Disable SSE instructions"),
    cl::init(false),
    cl::cat(RiddleToolCategory)
);

cl::opt<bool> NoSSE2(
    "mno-sse2",
    cl::desc("Disable SSE2 instructions"),
    cl::init(false),
    cl::cat(RiddleToolCategory)
);

bool riddle::parseArgs(const int argc, char **argv) {
    cl::HideUnrelatedOptions(RiddleToolCategory);
    cl::ParseCommandLineOptions(argc, argv, "Riddle Compiler");
    build_args.inputFiles = InputFileNames;
    build_args.outFile = OutFileNames.getValue();
    build_args.triple = TargetTriple.getValue();
    build_args.linkerScript = LinkScript.getValue();
    build_args.compileOnly = CompileOnly;
    build_args.noRedZone = NoRedZone;
    build_args.no80387 = No80387;
    build_args.noMMX = NoMMX;
    build_args.noSSE = NoSSE;
    build_args.noSSE2 = NoSSE2;

    if (M32 && M64) {
        std::cerr << "error: -m32 and -m64 are mutually exclusive" << std::endl;
        return false;
    }
    if (M32) {
        build_args.outBit = 32;
    }
    if (M64) {
        build_args.outBit = 64;
    }
    return true;
}
