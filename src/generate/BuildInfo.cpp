#include "BuildInfo.h"
#include "args.h"

#include <fstream>
#include <iostream>
#include <clang/Basic/DiagnosticIDs.h>
#include <clang/Basic/DiagnosticOptions.h>
#include <clang/Driver/Compilation.h>
#include <clang/Driver/Driver.h>
#include <clang/Frontend/TextDiagnosticPrinter.h>
#include <llvm/Support/Program.h>
#include <llvm/Support/VirtualFileSystem.h>

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
        std::vector<std::string> Args = {ClangPath, "-x", "ir", fileName + ".ll"};
        if (!build_args.outFile.empty()) {
            Args.emplace_back("-o");
            Args.emplace_back(build_args.outFile);
        }
        if (!build_args.linkerScript.empty()) {
            Args.emplace_back("-T");
            Args.emplace_back(build_args.linkerScript);
        }
        if (build_args.compileOnly) {
            Args.emplace_back("-c");
        }

        // 转换为 C 风格字符串数组
        std::vector<const char *> argsText;
        for (const auto &arg : Args) {
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