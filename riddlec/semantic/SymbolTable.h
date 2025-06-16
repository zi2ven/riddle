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
