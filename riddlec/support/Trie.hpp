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
#include <optional>
#include <string>
#include <vector>
#include <unordered_map>

namespace riddle {
    template<typename T>
    class Trie {
        struct TrieNode {
            char ch = 0;
            std::unordered_map<char, int> children;
            std::optional<T> value;
        };

        std::vector<TrieNode> nodes;

    public:
        Trie() {
            nodes.emplace_back();
        }

        Trie(std::initializer_list<std::pair<std::string, T>> list): Trie() {
            for (auto [str, value]: list) {
                add(str, value);
            }
        }

        void add(const std::string &str, const T &value) {
            int curr = 0;
            for (auto i: str) {
                if (nodes[curr].children.find(i) == nodes[curr].children.end()) {
                    nodes.emplace_back(TrieNode{i});
                    nodes[curr].children[i] = nodes.size() - 1;
                }
                curr = nodes[curr].children[i];
            }
            nodes[curr].value = value;
        }

        std::optional<T> get(const std::string &str) {
            int curr = 0;
            for (auto i: str) {
                if (nodes[curr].children.find(i) == nodes[curr].children.end()) {
                    return std::nullopt;
                }
                curr = nodes[curr].children[i];
            }
            return nodes[curr].value;
        }

        bool contains(const std::string &str) {
            int curr = 0;
            for (auto i: str) {
                if (nodes[curr].children.find(i) == nodes[curr].children.end()) {
                    return false;
                }
                curr = nodes[curr].children[i];
            }
            return nodes[curr].value.has_value();
        }
    };
}
