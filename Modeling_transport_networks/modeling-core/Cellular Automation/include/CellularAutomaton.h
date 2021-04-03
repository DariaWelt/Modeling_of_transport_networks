//
// Created by Daria Smirnova on 20.03.2021.
//

#ifndef MODELING_TRANSPORT_NETWORKS_CELLULARAUTOMATON_H
#define MODELING_TRANSPORT_NETWORKS_CELLULARAUTOMATON_H


#include <vector>
#include <istream>
#include "Environment.h"



class CellularAutomaton {
private:
    std::size_t _fieldSizeX;
    std::size_t _fieldSizeY;
    typedef std::vector<std::vector<std::vector<Environment::Type>>> AutomationGrid;
    AutomationGrid _grid;

public:
    CellularAutomaton(std::size_t xSize, std::size_t ySize,
                      std::istream const& gridData, std::istream const& agentsData);
    void run();

private:
    void ApplyRules(std::size_t i, std::size_t j);

};


#endif //MODELING_TRANSPORT_NETWORKS_CELLULARAUTOMATON_H
