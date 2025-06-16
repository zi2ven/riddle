#pragma once
#include <exception>
#include <string>

namespace riddle {
    class TypeError final : public std::exception {
    public:
        explicit TypeError(const std::string &msg) : message("TypeError: " + msg) {}

        [[nodiscard]] const char *what() const noexcept override {
            return message.c_str();
        }

    private:
        std::string message;
    };
}
