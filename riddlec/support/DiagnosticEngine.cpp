/*
 * Copyright (c) 2025 wangziwenhk
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#include "DiagnosticEngine.h"

namespace riddle {
    unsigned DiagnosticEngine::DiagnosticIDs::getCustomDiagID(DiagLevel level, const std::string &formatStr) {
        std::lock_guard lock(mutex_);
        const auto it = formatMap_.find(formatStr);
        if (it != formatMap_.end()) {
            return it->second;
        }
        const unsigned assigned = nextID_++;
        formatMap_[formatStr] = assigned;
        idMap_[assigned] = {level, formatStr};
        return assigned;
    }

    std::string DiagnosticEngine::DiagnosticIDs::format(unsigned diagID, const std::vector<std::string> &args) const {
        std::lock_guard lock(mutex_);
        const auto it = idMap_.find(diagID);
        if (it == idMap_.end()) {
            return "<Unknown diagnostic>";
        }
        std::string result = it->second.formatStr;
        for (size_t i = 0; i < args.size(); ++i) {
            std::string placeholder = "%" + std::to_string(i);
            size_t pos = 0;
            while ((pos = result.find(placeholder, pos)) != std::string::npos) {
                result.replace(pos, placeholder.length(), args[i]);
                pos += args[i].length();
            }
        }
        return result;
    }
} // riddle
