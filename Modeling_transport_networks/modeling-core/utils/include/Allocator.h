//
// Created by Daria Smirnova on 20.03.2021.
//

#ifndef MODELING_TRANSPORT_NETWORKS_ALLOCATOR_H
#define MODELING_TRANSPORT_NETWORKS_ALLOCATOR_H

#include <cstddef>
#include <istream>

template <class T>
class Allocator {
protected:
    Allocator() = 0;
    void report(T* p, std::size_t n, std::ostream const & stream, bool alloc = true) const = 0;
public:
    [[nodiscard]] virtual T* allocate(std::size_t n) = 0;
    virtual void deallocate( T* p, std::size_t n) noexcept = 0;
};

#endif //MODELING_TRANSPORT_NETWORKS_ALLOCATOR_H
