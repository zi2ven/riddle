/*
 * Copyright (c) 2025 zi2ven
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

#include <fstream>
#include <print>

#include "hir/ast_hir.h"
#include "hir/passes/llvm_pass.h"
#include "hir/passes/symbol_pass.h"
#include "hir/passes/type_pass.h"


int main(int argc, char *argv[]) {
    if (argc < 2)std::print("No File");

    std::ifstream ifs(argv[1]);
    if (!ifs.is_open()) {
        throw std::runtime_error("Cannot open file");
    }
    std::stringstream buffer;
    buffer << ifs.rdbuf();
    std::string code = buffer.str();
    antlr4::ANTLRInputStream input(code);
    RiddleLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    RiddleParser parser(&tokens);
    riddle::hir::HirContext context;
    auto ast = parser.program();
    auto lower = riddle::ast::ASTLower(context, argv[1]);
    auto hir = std::any_cast<riddle::hir::HirProgram *>(lower.visit(ast));
    auto sps = riddle::hir::SymbolPass();
    sps.run(hir);
    auto tps = riddle::hir::TypePass(context);
    tps.run(hir);
    auto llvmPass = riddle::hir::LLVMGen();
    llvmPass.visit(hir);
    llvmPass.dump();
}
