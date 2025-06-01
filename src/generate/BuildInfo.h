#pragma once
#include <llvm/IR/Module.h>
#include <llvm/TargetParser/Host.h>
#include <llvm/TargetParser/Triple.h>

namespace riddle {
    class BuildInfo {
    public:
        llvm::Triple triple;
        std::unique_ptr<llvm::Module> module;

        explicit BuildInfo(const std::string &tripleStr = llvm::sys::getDefaultTargetTriple()): triple(llvm::Triple(tripleStr)) {}

        void buildToFile(const std::string &fileName) const;
    };
} // riddle
