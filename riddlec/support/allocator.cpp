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

//
// Created by wangz on 25-7-18.
//

#include "allocator.h"

#include <cassert>
#include <print>
#include <cstdlib>
#include <new>

using namespace riddle;

BumpPtrAllocator::Slab::Slab(const size_t size): size(size), used(0) {
    memory = std::malloc(size);
    if (!memory) throw std::bad_alloc();
}

BumpPtrAllocator::Slab::~Slab() {
    std::free(memory);
}

BumpPtrAllocator::Slab &BumpPtrAllocator::Slab::operator=(Slab &&other) noexcept {
    if (this != &other) {
        std::free(memory);
        memory = other.memory;
        size = other.size;
        used = other.used;
        other.memory = nullptr;
    }
    return *this;
}

void *BumpPtrAllocator::Slab::allocate(const size_t bytes, const size_t alignment) {
    // Calculate the starting position after alignment
    char *current = static_cast<char *>(memory) + used;
    const auto aligned = reinterpret_cast<char *>(
        (reinterpret_cast<uintptr_t>(current) + alignment - 1) & ~(alignment - 1)
    );

    const size_t needed = aligned - static_cast<char *>(memory) + bytes;
    if (needed > size) {
        return nullptr; // Lack of space
    }

    used = needed;
    return aligned;
}

void *BumpPtrAllocator::allocate(size_t bytes, const size_t alignment) {
    if (bytes == 0) return nullptr;

    // For large blocks of memory, allocate a separate slab
    if (bytes > large_threshold) {
        slabs.emplace_back(bytes);
        total_allocated += bytes;
        return slabs.back().allocate(bytes, alignment);
    }

    // Trying to assign in the current slab
    if (!slabs.empty()) {
        if (void *ptr = slabs.back().allocate(bytes, alignment)) {
            total_allocated += bytes;
            return ptr;
        }
    }

    // The current slab space is insufficient, allocate a new slab
    size_t new_slab_size = std::max(slab_size, bytes + alignment);
    slabs.emplace_back(new_slab_size);

    void *ptr = slabs.back().allocate(bytes, alignment);
    assert(ptr && "The newly allocated slab should have enough space");
    total_allocated += bytes;
    return ptr;
}

void BumpPtrAllocator::reset() {
    if (slabs.empty()) return;

    // Keep the first slab, empty its usage count
    slabs[0].used = 0;

    // Delete other slabs
    slabs.erase(slabs.begin() + 1, slabs.end());

    total_allocated = 0;
}

void BumpPtrAllocator::clear() {
    slabs.clear();
    slabs.emplace_back(slab_size); // Reassign the first slab
    total_allocated = 0;
}

size_t BumpPtrAllocator::get_total_memory() const {
    size_t total = 0;
    for (const auto &slab: slabs) {
        total += slab.size;
    }
    return total;
}

void BumpPtrAllocator::dump() const {
    std::println("BumpPtrAllocator Stats:");
    std::println("  Slabs: {}", slabs.size());
    std::println("  Bytes allocated: {}", total_allocated);
    std::println("  Total memory: {}", get_total_memory());
    std::println("  Utilization: {}%",
                 get_total_memory() > 0 ? static_cast<double>(total_allocated) / static_cast<double>(get_total_memory()) * 100.0 : 0.0);
}
