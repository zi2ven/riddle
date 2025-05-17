#include "TypeInfo.h"
#include <unordered_map>

namespace riddle {
    std::shared_ptr<TypeInfo> TypeInfo::getPointerTo() {
        return nullptr;
    }

    std::shared_ptr<PrimitiveTypeInfo> getPrimitiveType(const std::string &name) {
        static auto intTy = std::make_shared<PrimitiveTypeInfo>("int");
        static auto floatTy = std::make_shared<PrimitiveTypeInfo>("float");
        static auto doubleTy = std::make_shared<PrimitiveTypeInfo>("double");
        static auto boolTy = std::make_shared<PrimitiveTypeInfo>("bool");
        static auto shortTy = std::make_shared<PrimitiveTypeInfo>("short");
        static auto charTy = std::make_shared<PrimitiveTypeInfo>("char");
        static auto voidTy = std::make_shared<PrimitiveTypeInfo>("void");

        static const std::unordered_map<std::string, std::shared_ptr<PrimitiveTypeInfo>> typeMap = {
            {"int", intTy},
            {"float", floatTy},
            {"double", doubleTy},
            {"bool", boolTy},
            {"short", shortTy},
            {"char", charTy},
            {"void", voidTy}
        };

        const auto it = typeMap.find(name);
        return (it != typeMap.end()) ? it->second : nullptr;
    }

    std::shared_ptr<TypeInfo> PointerTypeInfo::getPointerTo() {
        return this->pointe;
    }
}
