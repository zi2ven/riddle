#pragma once
#include <nlohmann/json.hpp>
#include "ParserManager.hpp"

using json = nlohmann::json;

namespace riddle::lsp {
    // 分发请求，返回需要回复的 JSON（通知类返回 null）
    json dispatchRequest(const json &req, ParserManager &pm);
}
