#pragma once
#include <exception>
#include <string>

namespace riddle {
    class SyntaxError final : public std::exception {
    public:
        explicit SyntaxError(const std::string &msg) : message("SyntaxError: " + msg) {}

        [[nodiscard]] const char *what() const noexcept override {
            return message.c_str();
        }

    private:
        std::string message;
    };
}
