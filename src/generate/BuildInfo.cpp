#include "BuildInfo.h"

#include <llvm/IR/LegacyPassManager.h>
#include <llvm/Target/TargetMachine.h>
#include <llvm/Support/MemoryBuffer.h>

namespace riddle {
    void BuildInfo::buildToFile(const std::string &fileName, const llvm::CodeGenFileType fileType) const {
        std::error_code EC;
        llvm::raw_fd_ostream Out(fileName, EC);
        llvm::legacy::PassManager PM;
        if (machine->addPassesToEmitFile(PM, Out, nullptr, fileType)) {
            throw std::runtime_error("Failed to emit to file");
        }
        PM.run(*module);
        Out.flush();
    }

    std::unique_ptr<llvm::MemoryBuffer> BuildInfo::buildToMemory(llvm::CodeGenFileType fileType) const {
        llvm::SmallVector<char, 4096> objBuffer; {
            llvm::raw_svector_ostream objStream(objBuffer);
            llvm::legacy::PassManager PM;
            if (machine->addPassesToEmitFile(PM, objStream, nullptr, fileType)) {
                throw std::runtime_error("Failed to emit to memory");
            }
            PM.run(*module);
        }

        return llvm::MemoryBuffer::getMemBuffer(
            llvm::StringRef(objBuffer.data(), objBuffer.size()), "", false
        );
    }
} // riddle
