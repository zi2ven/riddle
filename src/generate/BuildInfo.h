#pragma once
#include <llvm/IR/Module.h>
#include <llvm/MC/TargetRegistry.h>
#include <llvm/Target/TargetOptions.h>
#include <llvm/TargetParser/Host.h>
#include <llvm/TargetParser/Triple.h>


namespace riddle {
    class BuildInfo {
    public:
        llvm::Triple triple;
        const llvm::Target *target;
        llvm::TargetOptions options;
        llvm::TargetMachine *machine;
        std::unique_ptr<llvm::Module> module;

        explicit BuildInfo(const std::string &tripleStr = llvm::sys::getDefaultTargetTriple(),
                           const llvm::TargetOptions &options = {},
                           const std::string &features = "",
                           llvm::Reloc::Model RM = llvm::Reloc::PIC_): triple(llvm::Triple(tripleStr)), options(options) {
            std::string error;
            target = llvm::TargetRegistry::lookupTarget(triple.str(), error);
            if (!target) {
                throw std::runtime_error(error);
            }
            machine = target->createTargetMachine(triple.str(), "generic", features, options, RM);
        }

        void buildToFile(const std::string &fileName, llvm::CodeGenFileType fileType = llvm::CodeGenFileType::ObjectFile) const;

        std::unique_ptr<llvm::MemoryBuffer> buildToMemory(llvm::CodeGenFileType fileType = llvm::CodeGenFileType::ObjectFile) const;
    };
} // riddle
