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
#include <memory>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>

#include "SemObject.h"
#include "exception/NameError.h"

namespace riddle {
    class SemObject;

    class SymbolTable {
        std::unordered_map<std::string, std::stack<std::shared_ptr<SemObject>>> symbols;
        std::stack<std::unordered_set<std::string>> locals;

    public:
        void joinScope() {
            locals.emplace();
        }

        void leaveScope() {
            for (const auto &name: locals.top()) {
                symbols[name].pop();
            }
            locals.pop();
        }

        void addObject(const std::shared_ptr<SemObject> &object) {
            symbols[object->name].push(object);
            locals.top().insert(object->name);
        }

        std::shared_ptr<SemObject> getObject(const std::string &name) const {
            if (!symbols.contains(name)) {
                throw NameError(std::format("name '{}' is not defined", name));
            }
            return symbols.at(name).top();
        }

        bool isLocal(const std::string &name) const {
            return !locals.empty() && locals.top().contains(name);
        }

        bool isGlobal() const {
            return locals.size() == 1;
        }
    };
} // riddle
