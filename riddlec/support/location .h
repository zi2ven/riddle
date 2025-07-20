// Copyright (c) 2025 zi2ven
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#pragma once
#include <format>
#include <string>
#include <string_view>

namespace riddle {
    class SourceLocation {
    public:
        std::string_view filename;
        unsigned line;
        unsigned column;

        SourceLocation(): line(0), column(0) {}

        SourceLocation(const std::string &filename,
                       const unsigned line,
                       const unsigned column): filename(filename), line(line), column(column) {}

        std::string dump() {
            return std::format("{}:{}:{}", filename, line, column);
        }

        [[nodiscard]] bool isValid() const {
            return !filename.empty() && line > 0 && column > 0;
        }
    };
}
