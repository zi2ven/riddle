#pragma once

#include <llvm/IR/LLVMContext.h>

namespace riddle {
    inline std::shared_ptr<llvm::LLVMContext> globalContext;
    constexpr size_t MAX_DEPTH = 1000;
}