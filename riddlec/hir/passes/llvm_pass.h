// Copyright (c) 2025 zi2ven
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#pragma once
#include <llvm/IR/Module.h>
#include <llvm/IR/IRBuilder.h>
#include "config/llvm_config.h"
#include "hir/visitor.h"

namespace riddle::hir {
    class LLVMGen final : public HirVisitor {
    public:
        std::unique_ptr<llvm::Module> module = std::make_unique<llvm::Module>("", *config::context);
        llvm::IRBuilder<> builder;

        LLVMGen(): builder(*config::context) {}

        llvm::Type *parseType(Type *type);

        std::any visitHirFuncDecl(HirFuncDecl *node) override;

        void dump() const;
    };
}
