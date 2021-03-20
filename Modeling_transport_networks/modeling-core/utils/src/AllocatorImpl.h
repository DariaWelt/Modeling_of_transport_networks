//
// Created by Daria Smirnova on 20.03.2021.
//

#ifndef MODELING_TRANSPORT_NETWORKS_ALLOCATORIMPL_H
#define MODELING_TRANSPORT_NETWORKS_ALLOCATORIMPL_H

#include "../include/Allocator.h"
#include <limits>
// code from example from cppreference.com
// TODO: implement my allocator
template <class T>
class AllocatorImpl: public Allocator<T> {
protected:
    void report(T* p, std::size_t n, std::ostream & stream, bool alloc = true) const override {
        stream << (alloc ? "Alloc: " : "Dealloc: ") << sizeof(T) * n <<
        "bytes at " << std::hex << std::showbase << reinterpret_cast<void*>(p) << std::dec << "\n";
    }
public:
    template <class U> constexpr AllocatorImpl( const AllocatorImpl <U>&) noexcept {};
    [[nodiscard]] T* allocate (std::size_t n) override {
        if (n > std::numeric_limits<std::size_t>::max() / sizeof(T))
            throw std::bad_alloc();
    }
    void deallocate(T* p, std::size_t n) noexcept override {
        report(p, n, 0);
        std::free(p);
    }
};

#endif //MODELING_TRANSPORT_NETWORKS_ALLOCATORIMPL_H
