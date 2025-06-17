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

#include "Operators.h"

#include <format>

#include "SemObject.h"
using namespace riddle;
using namespace std;

static unordered_map<string, std::shared_ptr<TypeInfo>> builtinOps;

namespace {
    void init() {
        static bool isInited = false;
        if (isInited) {
            return;
        }
        isInited = true;
        builtinOps.clear();
        for (auto i: primitives) {
            for (auto j: op::operators) {
                builtinOps.emplace(std::format("{}_{}_{}", i, i, j), getPrimitiveType(i));
            }
            for (auto j: op::logic_operators) {
                builtinOps.emplace(std::format("{}_{}_{}", i, i, j), getPrimitiveType("bool"));
            }
        }

        builtinOps.emplace(std::format("{}_{}_{}", "bool", "bool", "||"), getPrimitiveType("bool"));
        builtinOps.emplace(std::format("{}_{}_{}", "bool", "bool", "&&"), getPrimitiveType("bool"));
    }
}

inline bool isBuiltinBinary(const std::shared_ptr<TypeInfo> &left, const std::shared_ptr<TypeInfo> &right) {
    return left->getTypeKind() == TypeInfo::Primitive && right->getTypeKind() == TypeInfo::Primitive;
}

std::shared_ptr<TypeInfo> op::getBuiltinBinary(const std::shared_ptr<TypeInfo> &left, const std::shared_ptr<TypeInfo> &right, const std::string &op) {
    init();
    if (!isBuiltinBinary(left, right)) {
        return nullptr;
    }

    const string key = std::format("{}_{}_{}", left->name, right->name, op);
    if (builtinOps.contains(key)) {
        return builtinOps.at(key);
    }
    return nullptr;
}

bool op::isLosslessConvertible(const std::shared_ptr<TypeInfo> &from, const std::shared_ptr<TypeInfo> &to) {
    if (from->getTypeKind() == TypeInfo::Primitive && to->getTypeKind() == TypeInfo::Pointer) {
        return true;
    }
    if (from->getTypeKind() == TypeInfo::Pointer && to->getTypeKind() == TypeInfo::Pointer) {
        return true;
    }
    if (from->getTypeKind() != TypeInfo::Primitive || to->getTypeKind() != TypeInfo::Primitive) {
        return false;
    }
    const auto left_size = primitiveSize[from->name];
    const auto right_size = primitiveSize[to->name];
    return left_size <= right_size;
}
