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


#include "BuildInfo.h"

#include <fstream>
#include <iostream>
#include <clang/Basic/DiagnosticIDs.h>
#include <clang/Basic/DiagnosticOptions.h>
#include <clang/Driver/Compilation.h>
#include <clang/Driver/Driver.h>
#include <clang/Frontend/TextDiagnosticPrinter.h>
#include <llvm/Support/Program.h>
#include <llvm/Support/VirtualFileSystem.h>
#include <llvm/Transforms/IPO/InferFunctionAttrs.h>
#include <llvm/Passes/PassBuilder.h>

#include "args.h"

namespace riddle {
    void BuildInfo::buildToFile() const {

        const auto fileName = build_args.outFile.empty() ? "a" : build_args.outFile;

        // 创建输出文件
        // LLVM 的 filesystem 不支持自动创建目录
        if (!build_args.outFile.empty()) {
            std::ofstream stream(fileName);
            if (!stream) {
                llvm::errs() << "Failed to create file: " << fileName << "\n";
                return;
            }
        }

        // 生成 LLVM IR 文件
        std::error_code EC;
        llvm::raw_fd_ostream Out(fileName + ".ll", EC);
        if (EC) {
            llvm::errs() << "Failed to open file: " << EC.message() << "\n";
            return;
        }
        module->setTargetTriple(triple.str());
        module->print(Out, nullptr);
        Out.flush();

        // 设置 Clang 驱动器
        const auto DiagOpts = llvm::makeIntrusiveRefCnt<clang::DiagnosticOptions>();
        auto *DiagClient = new clang::TextDiagnosticPrinter(llvm::errs(), &*DiagOpts);
        const auto Diags = llvm::makeIntrusiveRefCnt<clang::DiagnosticsEngine>(
            llvm::makeIntrusiveRefCnt<clang::DiagnosticIDs>(), &*DiagOpts, DiagClient);

        std::string ClangPath = "clang";
        llvm::ErrorOr<std::string> ClangPathOrErr = llvm::sys::findProgramByName("clang");
        if (ClangPathOrErr) {
            ClangPath = ClangPathOrErr.get();
        }

        clang::driver::Driver Driver(ClangPath, triple.str(), *Diags);

        // 构建编译参数
        std::vector<std::string> args = {ClangPath, "-x", "ir", fileName + ".ll"};

        auto addArgIf = [&args](const bool condition, const std::string &flag, const std::string &value = "") {
            if (condition) {
                args.emplace_back(flag);
                if (!value.empty()) {
                    args.emplace_back(value);
                }
            }
        };

        // 添加输出文件
        addArgIf(!build_args.outFile.empty(), "-o", build_args.outFile);

        // 添加链接脚本
        addArgIf(!build_args.linkerScript.empty(), "-T", build_args.linkerScript);

        // 添加编译选项
        addArgIf(build_args.compileOnly, "-c");
        addArgIf(build_args.noRedZone, "-mno-red-zone");
        addArgIf(build_args.no80387, "-mno-80387");
        addArgIf(build_args.noMMX, "-mno-mmx");
        addArgIf(build_args.noSSE, "-mno-sse");
        addArgIf(build_args.noSSE2, "-mno-sse2");

        // 添加目标位数
        if (build_args.outBit == 32) {
            args.emplace_back("-m32");
        } else if (build_args.outBit == 64) {
            args.emplace_back("-m64");
        } else if (build_args.outBit != 0) {
            throw std::runtime_error("Invalid bit size");
        }


        // 转换为 C 风格字符串数组
        std::vector<const char *> argsText;
        for (const auto &arg: args) {
            argsText.push_back(arg.c_str());
        }
        argsText.push_back(nullptr);

        // 执行编译任务
        const auto C = Driver.BuildCompilation(argsText);
        llvm::SmallVector<std::pair<int, const clang::driver::Command *>, 4> Failing;
        C->ExecuteJobs(C->getJobs(), Failing);

        // 清理临时文件
        if (llvm::sys::fs::exists(fileName + ".ll")) {
            if (std::error_code ec = llvm::sys::fs::remove(fileName + ".ll")) {
                llvm::errs() << "Failed to remove file: " << ec.message() << "\n";
            }
        }
    }
}
