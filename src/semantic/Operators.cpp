#include "Operators.h"

#include <format>

#include "SemObject.h"
using namespace riddle;
using namespace std;

static unordered_map<string, std::shared_ptr<TypeInfo>> builtinOps;
static bool isInited = false;

namespace {
    void init() {
        if (isInited) {
            return;
        }
        isInited = true;
        builtinOps.clear();
        for (auto i: primitives) {
            builtinOps.emplace(std::format("{}_{}_{}", i, i, '+'), getPrimitiveType(i));
        }
    }
}


std::shared_ptr<TypeInfo> op::getBuiltinBinary(const std::shared_ptr<TypeInfo> &left, const std::shared_ptr<TypeInfo> &right, const std::string &op) {
    if (!isInited) {
        init();
    }
    if (!isBuiltinBinary(left, right)) {
        return nullptr;
    }

    const string key = std::format("{}_{}_{}", left->name, right->name, op);
    if (builtinOps.contains(key)) {
        return builtinOps.at(key);
    }
    return nullptr;
}
