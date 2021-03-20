//
// Created by Daria Smirnova on 20.03.2021.
//

#ifndef MODELING_TRANSPORT_NETWORKS_GNODE_H
#define MODELING_TRANSPORT_NETWORKS_GNODE_H

#include <vector>
#include "NodeId.h"
class GNode {
protected:
    int _id;
    NList<int> _outNodesId;
    NList<int> _inNodesId;
    GNode(int id): _id(id) {};
    GNode(NodeId& idGenerator): _id(idGenerator.getNewId()), _outNodesId(nullptr), _inNodesId(nullptr) {};
public:
    virtual int getId() const;
    virtual size_t getInNumber() const;
    virtual size_t getOutNumber() const;
    // TODO: check if it returns ref instead copy (user souldn't be able to change vector)
    virtual NList<int> getInIndexes() const {
        return _outNodesId;
    };
    virtual std::vector<int> getOutIndexes() const {
        return _inNodesId;
    };
    virtual bool isInId(int id) const { _inNodesId.findFirst(id);}
    virtual bool isOutId(int id) const { _outNodesId.findFirst(id);}

};

#endif //MODELING_TRANSPORT_NETWORKS_GNODE_H
