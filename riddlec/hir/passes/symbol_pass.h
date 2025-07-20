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
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <utility>

#include "hir/visitor.h"

namespace riddle::hir {
    class HirDeclaration;

    class SymbolTable {
    public:
        class Object {
        public:
            std::string name;
            HirSymbol::SymbolKind kind;
            HirDeclaration *decl;

            Object(std::string name,
                   const HirSymbol::SymbolKind kind,
                   HirDeclaration *decl): name(std::move(name)), kind(kind), decl(decl) {}
        };

    protected:
        std::unordered_map<std::string, std::stack<std::unique_ptr<Object>>> symbols;
        std::stack<std::unordered_set<std::string>> locals;

    public:
        SymbolTable() {
            join();
        }

        ~SymbolTable() {
            exit();
        }

        void addObject(std::unique_ptr<Object> object) {
            if (locals.top().contains(object->name)) {
                throw std::runtime_error(std::format("symbol already exists: {}", object->name));
            }
            symbols[object->name].push(std::move(object));
        }

        Object *getObject(const std::string &name) {
            if (!symbols.contains(name) || symbols.at(name).empty()) {
                throw std::runtime_error(std::format("symbol not found: {}", name));
            }
            return symbols.at(name).top().get();
        }

        void join() {
            locals.emplace();
        }

        void exit() {
            for (const auto &i: locals.top()) {
                symbols.at(i).pop();
                if (symbols.at(i).empty()) {
                    symbols.erase(i);
                }
            }
            locals.pop();
        }
    };

    class SymbolPass final : public HirVisitor {
    protected:
        SymbolTable table;

    public:
        void visitHirSymbol(HirSymbol *node) override;
        void visitHirVarDecl(HirVarDecl *node) override;
    };
}
