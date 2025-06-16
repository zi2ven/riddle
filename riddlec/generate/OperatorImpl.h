#pragma once
#include <functional>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/Value.h>

#include "TypeInfo.h"

namespace llvm {
    class Value;
}

namespace riddle::op {
    using opFunc = std::function<llvm::Value *(llvm::Value *, llvm::Value *, llvm::IRBuilder<>&)>;

    opFunc getOpImpl(const std::shared_ptr<TypeInfo>& left, const std::shared_ptr<TypeInfo>& right, const std::string &op);
}
