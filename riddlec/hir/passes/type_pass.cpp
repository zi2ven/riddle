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

    void TypePass::collectTopLevelTypes(const HirProgram *program) {
        for (const auto decl: program->stmts) {
            if (auto *fn = dynamic_cast<HirFuncDecl *>(decl)) {
                visit(fn->returnType);

                std::vector<std::shared_ptr<Type>> ptys;
                for (const auto p: fn->params) {
                    visit(p);
                    ptys.emplace_back(p->type->type);
                }

                fn->functionType = std::make_shared<FunctionType>(fn->returnType->type, std::move(ptys));
            } else if (const auto *gv = dynamic_cast<HirVarDecl *>(decl); gv && gv->type) {
                visit(gv->type);
            } else if (auto *cls = dynamic_cast<HirClassDecl *>(decl)) {
                std::unordered_map<std::string, std::shared_ptr<Type>> fields;
                for (const auto mem: cls->members) {
                    visit(mem);
                    fields.emplace(mem->name, mem->type->type);
                }
                auto ct = std::make_shared<ClassType>(std::move(fields));
                cls->classType = ct;
                typeMap.emplace(cls->name, ct);
            }
        }
    }

    void TypePass::run(HirProgram *program) {
        collectTopLevelTypes(program);
        visit(program);
    }

    std::any TypePass::visitHirProgram(HirProgram *node) {
        for (const auto d: node->stmts) visit(d);
        return {};
    }

    std::any TypePass::visitHirSymbol(HirSymbol *node) {
        switch (node->kind) {
            case HirSymbol::SymbolKind::Class: {
                node->type = typeMap.at(node->name);
                break;
            }
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

                if (!vd->type) {
                    if (!vd->value)
                        throw std::runtime_error(
                            std::format("variable '{}' has neither type nor initializer", node->name));

                    if (inferring.contains(vd))
                        throw std::runtime_error("circular variable initialization involving '" + node->name + "'");

                    inferring.emplace(vd);
                    visit(vd->value);
                    inferring.erase(vd);
                    vd->type = context.make<HirSymbol>("@inferred-global");
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
        for (const auto p: node->params) visit(p);

        const auto *fty = dynamic_cast<FunctionType *>(node->func->type.get());
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
        for (const auto p: node->params) visit(p);

        for (const auto stmt: node->body) visit(stmt);
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

    std::any TypePass::visitHirClassDecl(HirClassDecl *node) {
        for (const auto m: node->methods) visit(m);
        return {};
    }

    std::any TypePass::visitHirReturn(HirReturn *node) {
        // todo 实现类型检测
        return HirVisitor::visitHirReturn(node);
    }
}
