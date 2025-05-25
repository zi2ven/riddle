#pragma once

#include <llvm/IR/LLVMContext.h>
#include <llvm/MC/TargetRegistry.h>
#include <llvm/Target/TargetMachine.h>
#include <llvm/TargetParser/Host.h>

namespace riddle {
    inline std::shared_ptr<llvm::LLVMContext> globalContext;
    constexpr size_t MAX_DEPTH = 1000;
}
