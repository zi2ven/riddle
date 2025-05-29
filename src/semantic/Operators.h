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

    static inline std::vector<std::string> operators = {
        "+", "-", "*", "/", "%", "=", "&", "|", "^", "<<", ">>"
    };

    static inline std::vector<std::string> logic_operators = {
        "==", "!=", "<", ">", "<=", ">="
    };

    static inline std::vector<std::string> bool_only_operators = {
        "&&", "||"
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
        return left->getTypeKind() == right->getTypeKind() && left->getTypeKind() == TypeInfo::Primitive;
    }

    std::shared_ptr<TypeInfo> getBuiltinBinary(const std::shared_ptr<TypeInfo> &left, const std::shared_ptr<TypeInfo> &right, const std::string &op);
}

namespace riddle::utils {
    inline std::string generateKey(const std::string &left, const std::string &right, const std::string &op) {
        return left + "_" + right + "_" + op;
    }

    inline std::tuple<std::string, std::string, std::string> generateTupleKey(const std::string &left, const std::string &right, const std::string &op) {
        return std::make_tuple(left, right, op);
    }
}
