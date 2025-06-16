#pragma once
#include <string>
#include <vector>
#include "support/riddledef.hpp"

namespace riddle {
    struct BuildArgs {
        std::vector<std::string> inputFiles;
        std::string outFile;
        std::string triple;
        std::string linkerScript;
        byte outBit;
        bool compileOnly{};
        bool noRedZone;
        bool no80387;
        bool noMMX;
        bool noSSE;
        bool noSSE2;
    };

    inline BuildArgs build_args;

    bool parseArgs(int argc, char **argv);
}
