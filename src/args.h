#pragma once
#include <string>
#include <vector>

struct BuildArgs {
    std::vector<std::string> inputFiles;
    std::string outFile;
    std::string triple;
};

inline BuildArgs build_args;

void parseArgs(int argc, char **argv);