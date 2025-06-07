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
    void BuildInfo::buildToFile(const std::string &fileName) const {
        if (!llvm::sys::fs::exists(fileName)) {
            std::ofstream stream(fileName);
            stream << "";
        }

        std::error_code EC;
        llvm::raw_fd_ostream Out(fileName + ".ll", EC);
        module->setTargetTriple(triple.str());
        module->print(Out, nullptr);
        Out.flush();

        const auto DiagOpts = llvm::makeIntrusiveRefCnt<clang::DiagnosticOptions>();
        auto *DiagClient = new clang::TextDiagnosticPrinter(llvm::errs(), &*DiagOpts);
        const auto Diags = llvm::makeIntrusiveRefCnt<clang::DiagnosticsEngine>(
            llvm::makeIntrusiveRefCnt<clang::DiagnosticIDs>(), &*DiagOpts, DiagClient);

        const std::string Triple = triple.str();
        std::string ClangPath;
        llvm::ErrorOr<std::string> ClangPathOrErr = llvm::sys::findProgramByName("clang");
        if (ClangPathOrErr) {
            ClangPath = ClangPathOrErr.get();
        } else {
            ClangPath = "clang";
        }
        clang::driver::Driver Driver(ClangPath, Triple, *Diags);
        const auto s = fileName + ".ll";
        std::vector<std::string> Args = {
            ClangPath, "-x", "ir", s, "-o", fileName
        };

        if (!build_args.linkerScript.empty()) {
            Args.emplace_back("-T");
            Args.emplace_back(build_args.linkerScript);
        }

        std::vector<const char *> argsText;
        for (const auto &i: Args)argsText.push_back(i.c_str());
        argsText.push_back(nullptr);

        const auto C = Driver.BuildCompilation(argsText);
        llvm::SmallVector<std::pair<int, const clang::driver::Command *>, 4> Failing;
        C->ExecuteJobs(C->getJobs(), Failing);
        if (llvm::sys::fs::exists(fileName + ".ll")) {
            if (std::error_code ec = llvm::sys::fs::remove(fileName + ".ll")) {
                llvm::errs() << "Failed to remove file: " << ec.message() << "\n";
            }
        }
    }
}
