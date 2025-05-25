#include "SerachDirs.h"

#include <iostream>
#include <clang/Basic/Diagnostic.h>
#include <clang/Basic/DiagnosticOptions.h>
#include <clang/Driver/Driver.h>
#include <clang/Driver/Compilation.h>
#include <clang/Driver/ToolChain.h>
#include <clang/Driver/Tool.h>
#include <clang/Frontend/TextDiagnosticPrinter.h>
#include <llvm/Support/Program.h>
#include <llvm/TargetParser/Host.h>
#include <llvm/Support/VirtualFileSystem.h>

#if defined(__linux__)
#include <unistd.h>
#elif defined(_WIN32)
#include <windows.h>
#endif


std::optional<std::string> riddle::findProgram(const std::string &program) {
    const auto pathOrErr = llvm::sys::findProgramByName(program);
    if (pathOrErr) {
        return pathOrErr.get();
    }
    return std::nullopt;
}

std::string riddle::getSelfPath() {
#if defined(__linux__)
    char buf[PATH_MAX];
    ssize_t len = readlink("/proc/self/exe", buf, sizeof(buf) - 1);
    if (len == -1) throw std::runtime_error("readlink failed");
    buf[len] = '\0';
    return buf;
#elif defined(_WIN32)
    char buf[MAX_PATH];
    DWORD len = GetModuleFileNameA(nullptr, buf, MAX_PATH);
    if (len == 0 || len == MAX_PATH) throw std::runtime_error("GetModuleFileNameA failed");
    return buf;
#else
    throw std::runtime_error("Unsupported platform");
#endif
}


std::vector<std::string> riddle::getCRT() {
    auto DiagOpts = llvm::makeIntrusiveRefCnt<clang::DiagnosticOptions>();
    auto *DiagClient = new clang::TextDiagnosticPrinter(llvm::errs(), &*DiagOpts);
    auto Diags = llvm::makeIntrusiveRefCnt<clang::DiagnosticsEngine>(
        llvm::makeIntrusiveRefCnt<clang::DiagnosticIDs>(), &*DiagOpts, DiagClient);

    // 2. 构造 Driver
    std::string ClangPath = llvm::sys::findProgramByName("clang").get();
    std::string Triple = llvm::sys::getDefaultTargetTriple();
    clang::driver::Driver Driver(ClangPath, Triple, *Diags);

    // 3. 构造命令行参数并生成 Compilation
    const std::vector Args = {
        "clang", "-xc", "-", "-c"
    };
    Driver.setCheckInputsExist(false);
    auto C = Driver.BuildCompilation(Args);

    // 4. 从 Compilation 拿到默认的 ToolChain（这是公有接口）
    const clang::driver::ToolChain &TC = C->getDefaultToolChain();
    std::string CrtPath = TC.GetFilePath("crt1.o");
    std::string crtBegin = TC.GetFilePath("crtbegin.o");
    std::string crtEnd = TC.GetFilePath("crtend.o");
    std::optional<std::string> libcDir = TC.getRuntimePath();
    const auto tlib = libcDir.value_or(std::string{});

    return std::vector{CrtPath, crtBegin, crtEnd, tlib};
}