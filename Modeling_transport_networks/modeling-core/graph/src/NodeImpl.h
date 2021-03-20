//
// Created by Daria Smirnova on 20.03.2021.
//

#ifndef MODELING_TRANSPORT_NETWORKS_NODEIMPL_H
#define MODELING_TRANSPORT_NETWORKS_NODEIMPL_H
#include "../include/GNode.h"
#include "../include/NodeId.h"
#include "NListImplLinkedList.h"

class NodeImpl: public GNode {
private:
    double _value;
public:
    NodeImpl(int value, NodeId& idGenerator): GNode(idGenerator), _value(value) {
        _outNodesId = NListImplLinkedList<int>();

    };
    double getValue() const {return _value;};
};

#endif //MODELING_TRANSPORT_NETWORKS_NODEIMPL_H
