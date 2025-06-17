/*
 * Copyright (c) 2025 wangziwenhk
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

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
