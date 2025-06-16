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
