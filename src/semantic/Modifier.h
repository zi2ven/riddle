#pragma once
#include <bitset>

namespace riddle {
    class Modifier {
        std::bitset<32> bs;

    public:
        enum ModifierType : char {
            Static
        };

        void set(const ModifierType type, const bool flag) {
            bs[type] = flag;
        }

        bool get(const ModifierType type) {
            return bs[type];
        }
    };
}
