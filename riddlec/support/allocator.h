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
#include <vector>

namespace riddle {
    class BumpPtrAllocator {
        struct Slab {
            void *memory;
            size_t size;
            size_t used;

            explicit Slab(size_t size);

            ~Slab();

            Slab(const Slab &) = delete;

            Slab &operator=(const Slab &) = delete;

            Slab(Slab &&other) noexcept
                : memory(other.memory), size(other.size), used(other.used) {
                other.memory = nullptr;
            }

            Slab &operator=(Slab &&other) noexcept;

            void *allocate(size_t bytes, size_t alignment);

            [[nodiscard]] size_t remaining() const {
                return size - used;
            }
        };

        std::vector<Slab> slabs;
        size_t slab_size;
        size_t large_threshold;
        size_t total_allocated;

    public:
        explicit BumpPtrAllocator(const size_t slab_sz = 4096, const size_t large_thresh = 4096)
            : slab_size(slab_sz), large_threshold(large_thresh), total_allocated(0) {
            // Pre-allocation
            slabs.emplace_back(slab_size);
        }

        ~BumpPtrAllocator() = default;

        void *allocate(size_t bytes, size_t alignment = alignof(std::max_align_t));

        template<typename T>
        T *allocate(const size_t count = 1) {
            return static_cast<T *>(allocate(sizeof(T) * count, alignof(T)));
        }

        template<typename T, typename... Args>
        T *make(Args &&... args) {
            T *ptr = allocate<T>();
            return new(ptr) T(std::forward<Args>(args)...);
        }

        void reset();

        void clear();

        [[nodiscard]] size_t get_bytes_allocated() const {
            return total_allocated;
        }

        [[nodiscard]] size_t get_total_memory() const;

        [[nodiscard]] size_t get_slab_count() const {
            return slabs.size();
        }

        void dump() const;
    };

    template<typename T>
    class SpecificBumpPtrAllocator {
        BumpPtrAllocator allocator;
        std::vector<T *> allocated_objects;

    public:
        explicit SpecificBumpPtrAllocator(size_t slab_size = 4096)
            : allocator(slab_size) {}

        ~SpecificBumpPtrAllocator() {
            destroy_all();
        }

        T *allocate() {
            T *ptr = allocator.allocate<T>();
            allocated_objects.push_back(ptr);
            return ptr;
        }

        template<typename... Args>
        T *make(Args &&... args) {
            T *ptr = allocate();
            return new(ptr) T(std::forward<Args>(args)...);
        }

        void destroy_all() {
            for (auto it = allocated_objects.rbegin(); it != allocated_objects.rend(); ++it) {
                (*it)->~T();
            }
            allocated_objects.clear();
            allocator.reset();
        }

        void reset() {
            destroy_all();
        }

        [[nodiscard]] size_t get_bytes_allocated() const {
            return allocator.get_bytes_allocated();
        }

        [[nodiscard]] size_t get_total_memory() const {
            return allocator.get_total_memory();
        }
    };
}
