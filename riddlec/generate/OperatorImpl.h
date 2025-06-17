/*
 * Copyright (c) 2025 wangziwenhk
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

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
