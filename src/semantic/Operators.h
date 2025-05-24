#pragma once
#include "TypeInfo.h"

namespace riddle {
    class SemFunction;
}

namespace riddle::op {
    enum OpType {
        Builtin,
        Custom,
    };

    /**
     * Checks if the given types represent a built-in binary operation.
     * A built-in binary operation is defined as one where both operands are of the same type kind
     * and that kind is primitive.
     *
     * @param left The type information of the left operand.
     * @param right The type information of the right operand.
     * @return True if both operands are of the same primitive type kind, false otherwise.
     */
    inline bool isBuiltinBinary(const std::shared_ptr<TypeInfo> &left, const std::shared_ptr<TypeInfo> &right) {
        return left->getTypeKind() == right->getTypeKind() == TypeInfo::Primitive;
    }

    std::shared_ptr<TypeInfo> getBuiltinBinary(const std::shared_ptr<TypeInfo> &left, const std::shared_ptr<TypeInfo> &right, const std::string &op);
}
