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

#include "TypeInfo.h"
#include <unordered_map>

namespace riddle {
    std::shared_ptr<TypeInfo> TypeInfo::getPointValue() {
        return nullptr;
    }

    std::shared_ptr<PrimitiveTypeInfo> getPrimitiveType(const std::string &name) {
        static auto intTy = std::make_shared<PrimitiveTypeInfo>("int", true);
        static auto floatTy = std::make_shared<PrimitiveTypeInfo>("float", true);
        static auto doubleTy = std::make_shared<PrimitiveTypeInfo>("double", true);
        static auto boolTy = std::make_shared<PrimitiveTypeInfo>("bool", false);
        static auto shortTy = std::make_shared<PrimitiveTypeInfo>("short", true);
        static auto charTy = std::make_shared<PrimitiveTypeInfo>("char", false);
        static auto voidTy = std::make_shared<PrimitiveTypeInfo>("void", false);
        static auto longTy = std::make_shared<PrimitiveTypeInfo>("long", true);

        static const std::unordered_map<std::string, std::shared_ptr<PrimitiveTypeInfo>> typeMap = {
            {"int", intTy},
            {"float", floatTy},
            {"double", doubleTy},
            {"bool", boolTy},
            {"short", shortTy},
            {"char", charTy},
            {"void", voidTy},
            {"long", longTy}
        };

        const auto it = typeMap.find(name);
        return (it != typeMap.end()) ? it->second : nullptr;
    }

    std::shared_ptr<TypeInfo> PointerTypeInfo::getPointValue() {
        return this->pointe;
    }
}
