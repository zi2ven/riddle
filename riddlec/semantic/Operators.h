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

    /**
     * Retrieves the type information for a built-in binary operation based on the provided operands and operator.
     * The function first checks if the operation qualifies as a built-in binary operation using `isBuiltinBinary`.
     * If qualified, it constructs a unique key from the operand types and operator name to look up or determine
     * the corresponding type information in the `builtinOps` map. If no match is found, the function returns null.
     *
     * @param left The type information of the left operand involved in the binary operation.
     * @param right The type information of the right operand involved in the binary operation.
     * @param op The string representation of the operator (e.g., "+", "-", "==").
     * @return A shared pointer to the TypeInfo object representing the result type of the binary operation,
     *         or a null pointer if the operation is not recognized as a built-in binary operation or lacks a defined type.
     */
    std::shared_ptr<TypeInfo> getBuiltinBinary(const std::shared_ptr<TypeInfo> &left, const std::shared_ptr<TypeInfo> &right, const std::string &op);


    /**
     * Determines if a type can be converted to another type without loss of information.
     * This function checks whether the type represented by `from` can be converted to the type
     * represented by `to` in a way that preserves all information. Specifically, both types must
     * be of primitive kind for the conversion to be considered lossless.
     *
     * @param from A shared pointer to the TypeInfo object representing the source type.
     * @param to A shared pointer to the TypeInfo object representing the target type.
     * @return True if the conversion is lossless, false otherwise.
     */
    bool isLosslessConvertible(const std::shared_ptr<TypeInfo> &from, const std::shared_ptr<TypeInfo> &to);
}

namespace riddle::utils {
    inline std::string generateKey(const std::string &left, const std::string &right, const std::string &op) {
        return left + "_" + right + "_" + op;
    }

    inline std::tuple<std::string, std::string, std::string> generateTupleKey(const std::string &left, const std::string &right, const std::string &op) {
        return std::make_tuple(left, right, op);
    }
}
