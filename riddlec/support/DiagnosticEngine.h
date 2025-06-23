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

#pragma once
#include <mutex>
#include <string>
#include <unordered_map>
#include <vector>


namespace riddle {
    enum class DiagLevel { Note, Warning, Error, Fatal };

    class DiagnosticEngine {
    public:
        class DiagnosticIDs {
        public:
            unsigned getCustomDiagID(DiagLevel level, const std::string &formatStr);

            std::string format(unsigned diagID, const std::vector<std::string> &args) const;

        private:
            struct DiagInfo {
                DiagLevel level;
                std::string formatStr;
            };

            mutable std::mutex mutex_;
            // Next ID to assign.
            unsigned nextID_ = 1;
            // Map from format template to assigned ID.
            std::unordered_map<std::string, unsigned> formatMap_;
            // Reverse map: ID -> DiagInfo for formatting.
            std::unordered_map<unsigned, DiagInfo> idMap_;
        };
    };
} // riddle
