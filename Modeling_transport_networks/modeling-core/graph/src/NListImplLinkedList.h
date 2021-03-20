//
// Created by Daria Smirnova on 20.03.2021.
//

#ifndef MODELING_TRANSPORT_NETWORKS_NLISTIMPLLINKEDLIST_H
#define MODELING_TRANSPORT_NETWORKS_NLISTIMPLLINKEDLIST_H

#include <list>
#include "../include/NodeId.h"
#include "../../utils/src/AllocatorImpl.h"

template < class T >
class NListImplLinkedList: public NList<T> {
private:
    std::list<T> _data;
public:
    NListImplLinkedList() {
        _data = std::list<T, AllocatorImpl<T>>();
    };
    NListImplLinkedList(const T* data, size_t size) {
        _data = std::list<T, AllocatorImpl<T>>();
        for (size_t i = 0; i < size; ++i)
            _data.push_back(*(data+i));
    }
    virtual size_t size() const override { return _data.size(); };
    virtual void pushBack(const T& element) override { _data.push_back(element); };
    virtual void pushFront(const T& element) override { _data.push_front(element); };
    // TODO: fix iterator conpile errors
    virtual void push(std::iterator position, const T& element) override { _data.insert(position,element );};
    virtual T get(int index) const override { return _data[index];};
    virtual void remove(std::iterator position) override { _data.remove(position); };
    virtual void remove(std::iterator startPos, std::iterator endPos) override {};
    virtual void emplace(std::iterator position, const T& element) override { _data.emplace(element, position);};
    virtual std::iterator findFirst(const T& element) override { };
    virtual std::iterator findFirst(const T& element, std::iterator start) override {};

};

#endif //MODELING_TRANSPORT_NETWORKS_NLISTIMPLLINKEDLIST_H
