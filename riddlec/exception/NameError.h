#pragma once
#include <exception>
#include <string>

namespace riddle {
    class NameError final : public std::exception {
    public:
        explicit NameError(const std::string &msg) : message("NameError: " + msg) {}

        [[nodiscard]] const char *what() const noexcept override {
            return message.c_str();
        }

    private:
        std::string message;
    };
}
