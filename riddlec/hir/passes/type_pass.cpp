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

#include "type_pass.h"

#include "hir/context.h"

namespace riddle::hir {
    TypePass::TypePass(HirContext &ctx) : context(ctx) {
        typeMap = {
            {"int", std::make_shared<IntegerType>(32)},
            {"float", std::make_shared<FloatType>(FloatType::FloatKind::Float)},
            {"bool", std::make_shared<IntegerType>(1)},
        };
    }

    std::shared_ptr<Type> TypePass::parseBasicType(std::string_view name) {
        if (!typeMap.contains(name.data()))
            throw std::runtime_error(std::format("unknown builtin type: {}", name));
        return typeMap.at(name.data());
    }

    void TypePass::collectTopLevelTypes(HirProgram *program) {
        for (auto decl: program->stmts) {
            /* 1. 函数原型 */
            if (auto *fn = dynamic_cast<HirFuncDecl *>(decl)) {
                /* 先解析返回类型 */
                visit(fn->returnType);

                /* 解析形参类型 */
                std::vector<std::shared_ptr<Type>> ptys;
                for (auto p: fn->params) {
                    visit(p); // 形参自己的 HirVarDecl
                    ptys.emplace_back(p->type->type);
                }

                /* 生成并缓存函数类型 */
                fn->functionType = std::make_shared<FunctionType>(fn->returnType->type, std::move(ptys));
            }
            /* 2. 全局变量显式类型（推断型留到第二遍） */
            else if (auto *gv = dynamic_cast<HirVarDecl *>(decl); gv && gv->type) {
                visit(gv->type);
            }
        }
    }

    /* ---------- HirBasePass::run ---------- */
    void TypePass::run(HirProgram *program) {
        /* 仅收集顶层函数 */
        collectTopLevelTypes(program);

        /* 完整遍历，做类型检查  */
        visit(program);
    }

    std::any TypePass::visitHirProgram(HirProgram *node) {
        for (auto d: node->stmts) visit(d);
        return {};
    }

    std::any TypePass::visitHirSymbol(HirSymbol *node) {
        switch (node->kind) {
            case HirSymbol::SymbolKind::BuiltinType:
                node->type = parseBasicType(node->name);
                break;

            case HirSymbol::SymbolKind::Function: {
                const auto *fd = dynamic_cast<HirFuncDecl *>(node->declaration);
                if (!fd->functionType)
                    throw std::runtime_error("function used before prototype collected");
                node->type = fd->functionType;
                break;
            }

            case HirSymbol::SymbolKind::Variable: {
                auto *vd = dynamic_cast<HirVarDecl *>(node->declaration);

                /* 若尚未推断出类型，则现场推断 */
                if (!vd->type) {
                    if (!vd->value)
                        throw std::runtime_error(
                            std::format("variable '{}' has neither type nor initializer", node->name));

                    /* 检测循环引用 */
                    if (inferring.contains(vd))
                        throw std::runtime_error("circular variable initialization involving '" + node->name + "'");

                    inferring.emplace(vd);      // 标记正在推断
                    visit(vd->value);           // 推断初始值类型
                    inferring.erase(vd);

                    vd->type       = context.make<HirSymbol>("@inferred-global");
                    vd->type->type = vd->value->type;
                }

                node->type = vd->type->type;
                break;
            }
            default:
                break;
        }
        return {};
    }

    std::any TypePass::visitHirIntLiteral(HirIntLiteral *n) {
        n->type = typeMap.at("int");
        return {};
    }

    std::any TypePass::visitHirFloatLiteral(HirFloatLiteral *n) {
        n->type = typeMap.at("float");
        return {};
    }

    std::any TypePass::visitHirBooleanLiteral(HirBooleanLiteral *n) {
        n->type = typeMap.at("bool");
        return {};
    }

    std::any TypePass::visitHirCall(HirCall *node) {
        visit(node->func);
        for (auto p: node->params) visit(p);

        auto *fty = dynamic_cast<FunctionType *>(node->func->type.get());
        if (!fty) throw std::runtime_error("corrupted function type");

        if (fty->params.size() != node->params.size())
            throw std::runtime_error("parameter count mismatch");

        for (std::size_t i = 0; i < node->params.size(); ++i) {
            if (!node->params[i]->type->equal(fty->params[i].get()))
                throw std::runtime_error("parameter " + std::to_string(i) + " type mismatch");
        }

        node->type = fty->returnType;
        return {};
    }

    std::any TypePass::visitHirFuncDecl(HirFuncDecl *node) {
        visit(node->returnType);
        for (auto p: node->params) visit(p);

        for (auto stmt: node->body) visit(stmt);
        return {};
    }

    std::any TypePass::visitHirVarDecl(HirVarDecl *node) {
        if (node->type) visit(node->type);
        if (node->value) visit(node->value);

        if (!node->type && node->value) {
            node->type = context.make<HirSymbol>("@inferred-type");
            node->type->type = node->value->type;
        }
        return {};
    }
}
