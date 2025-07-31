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
    if (type == nullptr) {
        throw std::invalid_argument("Invalid type");
    }
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

std::any riddle::hir::LLVMGen::visitHirVarDecl(HirVarDecl *node) {
    const auto type = parseType(node->type->type.get());
    llvm::Value *value = nullptr;
    if (node->value) {
        value = std::any_cast<llvm::Value *>(visit(node->value));
    }

    if (node->isGlobal) {
        const auto init = llvm::dyn_cast<llvm::Constant>(value);
        if (!init) {
            throw std::runtime_error("global variable must be constant");
        }
        const auto gb = new llvm::GlobalVariable(
            *module,
            type,
            node->isVal,
            llvm::GlobalValue::ExternalLinkage,
            init,
            node->name
        );
        node->llvmAlloca = gb;
    } else {
        builder.CreateStore(value, node->llvmAlloca);
    }


    return {};
}

std::any riddle::hir::LLVMGen::visitHirFuncDecl(HirFuncDecl *node) {
    const auto returnType = parseType(node->returnType->type.get());
    std::vector<llvm::Type *> paramTypes;

    for (const auto i: node->params) {
        paramTypes.emplace_back(parseType(i->type->type.get()));
    }

    const auto fty = llvm::FunctionType::get(returnType, paramTypes, node->isVar);
    const auto func = llvm::Function::Create(fty, llvm::GlobalValue::ExternalLinkage, node->name, module.get());

    node->llvmFunc = func;

    const auto bb = llvm::BasicBlock::Create(builder.getContext(), "entry", func);
    builder.SetInsertPoint(bb);

    // pre alloca

    size_t index = 0;
    for (const auto i: node->params) {
        i->llvmAlloca = func->getArg(index);
        ++index;
    }

    for (const auto i: node->definedVar) {
        const auto type = parseType(i->type->type.get());
        i->llvmAlloca = builder.CreateAlloca(type);
    }

    for (const auto i: node->body) {
        visit(i);
    }

    return {};
}

std::any riddle::hir::LLVMGen::visitHirIntLiteral(HirIntLiteral *node) {
    llvm::Value *value = builder.getInt32(node->value);
    return value;
}

std::any riddle::hir::LLVMGen::visitHirFloatLiteral(HirFloatLiteral *node) {
    llvm::Value *value = llvm::ConstantFP::get(builder.getFloatTy(), node->value);
    return value;
}

std::any riddle::hir::LLVMGen::visitHirCharLiteral(HirCharLiteral *node) {
    llvm::Value *value = builder.getInt8(node->value);
    return value;
}

std::any riddle::hir::LLVMGen::visitHirSymbol(HirSymbol *node) {
    llvm::Value *result = nullptr;
    switch (node->kind) {
        case HirSymbol::SymbolKind::Function:
            result = dynamic_cast<HirFuncDecl *>(node->declaration)->llvmFunc;
            break;
        case HirSymbol::SymbolKind::Variable:
            result = dynamic_cast<HirVarDecl *>(node->declaration)->llvmAlloca;
            result = builder.CreateLoad(parseType(node->type.get()),result);
            break;
        default: throw std::logic_error("Not Impl");
    }
    return result;
}

std::any riddle::hir::LLVMGen::visitHirCall(HirCall *node) {
    const auto obj = std::any_cast<llvm::Value *>(visit(node->func));
    const auto func = llvm::dyn_cast<llvm::Function>(obj);

    if (func == nullptr) {
        throw std::runtime_error("Object not Func");
    }
    //todo 实现参数

    std::vector<llvm::Value *> params;
    params.reserve(node->params.size());
    for (const auto i: node->params) {
        params.emplace_back(std::any_cast<llvm::Value *>(visit(i)));
    }

    llvm::Value* result = builder.CreateCall(func, params);

    return result;
}

void riddle::hir::LLVMGen::dump() const {
    module->print(llvm::outs(), nullptr);
}
