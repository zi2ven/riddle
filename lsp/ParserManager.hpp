#pragma once
#include <string>
#include <vector>
#include <nlohmann/json.hpp>
using json = nlohmann::json;
namespace riddle::lsp {
    struct CompletionItem {
        std::string label;
        std::string kind;  // e.g. "Function"
        json toJson() const {
            return {
              {"label", label},
              {"kind", kind == "Function" ? 3 : 1}
            };
        }
    };

    class ParserManager {
    public:
        void parse(const std::string &uri, const std::string &text);
        std::vector<json> complete(const std::string &uri, int line, int ch);
    };
}
