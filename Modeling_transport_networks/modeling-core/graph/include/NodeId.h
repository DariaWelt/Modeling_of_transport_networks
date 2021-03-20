//
// Created by Daria Smirnova on 20.03.2021.
//

#ifndef MODELING_TRANSPORT_NETWORKS_NODEID_H
#define MODELING_TRANSPORT_NETWORKS_NODEID_H

#include <cstddef>
#include <iterator>

class NodeId {
private:
    int index;
public:
    NodeId() : index(0){}
    int getNewId() {return index++;};
    void resetCounter() {index = 0;};
};

template <class T>
class NList{
protected:
    NList();
    NList(const T* data, size_t size);
public:
    virtual size_t size() const = 0;
    virtual void pushBack(const T& element) = 0;
    virtual void pushFront(const T& element) = 0;
    // TODO: fix iterator conpile errors
    virtual void push(std::iterator position, const T& element) = 0;
    virtual T get(int index) const = 0;
    virtual void remove(std::iterator position) = 0;
    virtual void remove(std::iterator startPos, std::iterator endPos) = 0;
    virtual void emplace(std::iterator position, const T& element) = 0;
    virtual std::iterator findFirst(const T& element) = 0;
    virtual std::iterator findFirst(const T& element, std::iterator start) = 0;
};

#endif //MODELING_TRANSPORT_NETWORKS_NODEID_H
