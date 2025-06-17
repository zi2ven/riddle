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
