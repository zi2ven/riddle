#include "OperatorImpl.h"

#include <map>
#include <string>
#include <memory>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/Value.h>

namespace riddle::op {
    using KeyType = std::tuple<std::string, std::string, std::string>;

    static std::map<KeyType, opFunc> opMap = {
        {
            std::make_tuple("int", "int", "+"), [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<>& builder) -> llvm::Value * {
                return builder.CreateAdd(lhs, rhs);
            }
        },
        {
            std::make_tuple("float", "float", "+"), [](llvm::Value *lhs, llvm::Value *rhs, llvm::IRBuilder<>& builder) -> llvm::Value * {
                return builder.CreateFAdd(lhs, rhs);
            }
        }
    };

    opFunc getOpImpl(const std::shared_ptr<TypeInfo> &left, const std::shared_ptr<TypeInfo> &right, const std::string &op) {
        const auto key = std::make_tuple(left->name, right->name, op);
        const auto it = opMap.find(key);
        if (it != opMap.end()) {
            return it->second;
        }
        return nullptr;
    }
} // namespace riddle::op
