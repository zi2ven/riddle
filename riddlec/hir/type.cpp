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

#include "type.h"

#include <format>

namespace riddle::hir {
    std::string IntegerType::getName() {
        return std::format("i{}", bits);
    }

    size_t IntegerType::getSize() {
        return bits;
    }

    std::string FloatType::getName() {
        switch (kind) {
            case FloatKind::Float:
                return "f32";
            case FloatKind::Double:
                return "f64";
            case FloatKind::Half:
                return "f16";
            case FloatKind::Huge:
                return "f128";
        }
        return "<unknown>";
    }

    size_t FloatType::getSize() {
        switch (kind) {
            case FloatKind::Float:
                return 32;
            case FloatKind::Double:
                return 64;
            case FloatKind::Half:
                return 16;
            case FloatKind::Huge:
                return 128;
            default: break;
        }
        return -1;
    }

    std::string CharType::getName() {
        return "char";
    }

    std::string FunctionType::getName() {
        return "function";
    }

    size_t FunctionType::getSize() {
        // todo 实现对 target 宽度的解析
        return sizeof(void *) * 8;
    }

    bool FunctionType::equal(Type *other) {
        {
            if (this->getKind() != other->getKind()) { return false; }
            const auto fty = dynamic_cast<FunctionType *>(other);
            if (!fty) {
                return false;
            }
            if (fty->params.size() != params.size()) { return false; }
            if (!fty->returnType->equal(this->returnType.get())) { return false; }
            for (unsigned i = 0; i < fty->params.size(); ++i) {
                if (!fty->params[i]->equal(this->params[i].get())) {
                    return false;
                }
            }
            return true;
        }
    }
}
