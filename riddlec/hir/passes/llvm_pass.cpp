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

#include "llvm_pass.h"

llvm::Type *riddle::hir::LLVMGen::parseType(Type *type) {
    switch (type->getKind()) {
        case Type::Kind::Integer:
            return builder.getIntNTy(type->getSize());
        case Type::Kind::Float: {
            switch (type->getSize()) {
                case 16:
                    return builder.getHalfTy();
                case 32:
                    return builder.getFloatTy();
                case 64:
                    return builder.getDoubleTy();
                case 128:
                    return llvm::Type::getFP128Ty(builder.getContext());
                default: break;
            }
            break;
        }
        case Type::Kind::Function: throw std::runtime_error("function type can't used");
        default: break;
    }
    throw std::runtime_error("unknown type");
}

std::any riddle::hir::LLVMGen::visitHirFuncDecl(HirFuncDecl *node) {
    const auto returnType = parseType(node->returnType->type.get());
    std::vector<llvm::Type *> paramTypes;

    for (const auto i: node->params) {
        paramTypes.emplace_back(parseType(i->type->type.get()));
    }

    const auto fty = llvm::FunctionType::get(returnType, paramTypes, node->isVar);
    const auto func = llvm::Function::Create(fty, llvm::GlobalValue::ExternalLinkage, node->name, module.get());

    const auto bb = llvm::BasicBlock::Create(builder.getContext(), "entry", func);
    builder.SetInsertPoint(bb);

    for (const auto i: node->body) {
        visit(i);
    }

    return {};
}
