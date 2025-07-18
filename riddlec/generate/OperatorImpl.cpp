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

#include "OperatorImpl.h"

#include <map>
#include <string>
#include <memory>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/Value.h>

namespace riddle::op {
    using KeyType = std::tuple<std::string, std::string, std::string>;

    static std::map<KeyType, opFunc> opMap = {};
} // namespace riddle::op

namespace {
    using namespace riddle::op;

    void initSignedInteger(const std::string &typeName) {
        opMap.emplace(std::tuple{typeName, typeName, "+"}, [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<> &builder) -> llvm::Value * {
            return builder.CreateAdd(lhs, rhs);
        });
        opMap.emplace(std::tuple{typeName, typeName, "-"}, [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<> &builder) -> llvm::Value * {
            return builder.CreateSub(lhs, rhs);
        });
        opMap.emplace(std::tuple{typeName, typeName, "*"}, [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<> &builder) -> llvm::Value * {
            return builder.CreateMul(lhs, rhs);
        });
        opMap.emplace(std::tuple{typeName, typeName, "/"}, [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<> &builder) -> llvm::Value * {
            return builder.CreateSDiv(lhs, rhs);
        });
        opMap.emplace(std::tuple{typeName, typeName, "%"}, [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<> &builder) -> llvm::Value * {
            return builder.CreateSRem(lhs, rhs);
        });
        opMap.emplace(std::tuple{typeName, typeName, "<<"}, [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<> &builder) -> llvm::Value * {
            return builder.CreateShl(lhs, rhs);
        });
        opMap.emplace(std::tuple{typeName, typeName, ">>"}, [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<> &builder) -> llvm::Value * {
            return builder.CreateAShr(lhs, rhs);
        });
        opMap.emplace(std::tuple{typeName, typeName, "&"}, [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<> &builder) -> llvm::Value * {
            return builder.CreateAnd(lhs, rhs);
        });
        opMap.emplace(std::tuple{typeName, typeName, "|"}, [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<> &builder) -> llvm::Value * {
            return builder.CreateOr(lhs, rhs);
        });
        opMap.emplace(std::tuple{typeName, typeName, "^"}, [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<> &builder) -> llvm::Value * {
            return builder.CreateXor(lhs, rhs);
        });
        opMap.emplace(std::tuple{typeName, typeName, "="}, [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<> &builder) -> llvm::Value * {
            return rhs;
        });
        opMap.emplace(std::tuple{typeName, typeName, "=="}, [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<> &builder) -> llvm::Value * {
            return builder.CreateICmpEQ(lhs, rhs);
        });
        opMap.emplace(std::tuple{typeName, typeName, "!="}, [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<> &builder) -> llvm::Value * {
            return builder.CreateICmpNE(lhs, rhs);
        });
        opMap.emplace(std::tuple{typeName, typeName, "<"}, [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<> &builder) -> llvm::Value * {
            return builder.CreateICmpSLT(lhs,rhs);
        });
        opMap.emplace(std::tuple{typeName, typeName, "<="}, [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<> &builder) -> llvm::Value * {
            return builder.CreateICmpSLE(lhs, rhs);
        });
        opMap.emplace(std::tuple{typeName, typeName, ">"}, [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<> &builder) -> llvm::Value * {
            return builder.CreateICmpSGT(lhs, rhs);
        });
        opMap.emplace(std::tuple{typeName, typeName, ">="}, [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<> &builder) -> llvm::Value * {
            return builder.CreateICmpSGE(lhs, rhs);
        });
    }

    void initUnsignedInteger(const std::string &typeName) {
        initSignedInteger(typeName);
        opMap[{typeName, typeName, "/"}] = [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<> &builder) -> llvm::Value * {
            return builder.CreateUDiv(lhs, rhs);
        };
        opMap[std::tuple{typeName, typeName, "%"}] = [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<> &builder) -> llvm::Value * {
            return builder.CreateURem(lhs, rhs);
        };
        opMap[std::tuple{typeName, typeName, ">>"}] = [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<> &builder) -> llvm::Value * {
            return builder.CreateLShr(lhs, rhs);
        };
    }

    void initFloat(const std::string &typeName) {
        opMap.emplace(std::tuple{typeName, typeName, "+"}, [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<> &builder) -> llvm::Value * {
            return builder.CreateFAdd(lhs, rhs);
        });
        opMap.emplace(std::tuple{typeName, typeName, "-"}, [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<> &builder) -> llvm::Value * {
            return builder.CreateFSub(lhs, rhs);
        });
        opMap.emplace(std::tuple{typeName, typeName, "*"}, [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<> &builder) -> llvm::Value * {
            return builder.CreateFMul(lhs, rhs);
        });
        opMap.emplace(std::tuple{typeName, typeName, "/"}, [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<> &builder) -> llvm::Value * {
            return builder.CreateFDiv(lhs, rhs);
        });
        opMap.emplace(std::tuple{typeName, typeName, "%"}, [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<> &builder) -> llvm::Value * {
            return builder.CreateFRem(lhs, rhs);
        });
        opMap.emplace(std::tuple{typeName, typeName, "="}, [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<> &builder) -> llvm::Value * {
            return rhs;
        });
        opMap.emplace(std::tuple{typeName, typeName, "=="}, [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<> &builder) -> llvm::Value * {
            return builder.CreateICmpEQ(lhs, rhs);
        });
        opMap.emplace(std::tuple{typeName, typeName, "!="}, [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<> &builder) -> llvm::Value * {
            return builder.CreateICmpNE(lhs, rhs);
        });
        opMap.emplace(std::tuple{typeName, typeName, "<"}, [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<> &builder) -> llvm::Value * {
            return builder.CreateICmpSLT(lhs,rhs);
        });
        opMap.emplace(std::tuple{typeName, typeName, "<="}, [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<> &builder) -> llvm::Value * {
            return builder.CreateICmpSLE(lhs, rhs);
        });
        opMap.emplace(std::tuple{typeName, typeName, ">"}, [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<> &builder) -> llvm::Value * {
            return builder.CreateICmpSGT(lhs, rhs);
        });
        opMap.emplace(std::tuple{typeName, typeName, ">="}, [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<> &builder) -> llvm::Value * {
            return builder.CreateICmpSGE(lhs, rhs);
        });

    }

    void init() {
        static bool inited = false;
        if (inited)return;
        inited = true;
        opMap.clear();

        initSignedInteger("int");
        initSignedInteger("short");
        initSignedInteger("long");
        initUnsignedInteger("char");
        initUnsignedInteger("bool");
        initFloat("float");
        initFloat("double");
    }
}

namespace riddle::op {
    opFunc getOpImpl(const std::shared_ptr<TypeInfo> &left, const std::shared_ptr<TypeInfo> &right, const std::string &op) {
        init();
        const auto key = std::make_tuple(left->name, right->name, op);
        const auto it = opMap.find(key);
        if (it != opMap.end()) {
            return it->second;
        }
        return nullptr;
    }
} // namespace riddle::op
