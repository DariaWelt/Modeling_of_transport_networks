cmake_minimum_required(VERSION 3.17)
project(Modeling_transport_networks)

set(CMAKE_CXX_STANDARD 17)

add_executable(Modeling_transport_networks main.cpp modeling-core/graph/include/GNode.h modeling-core/graph/include/NodeId.h modeling-core/graph/src/NodeImpl.h modeling-core/graph/src/NListImplLinkedList.h modeling-core/utils/include/Allocator.h modeling-core/utils/src/AllocatorImpl.h "modeling-core/Cellular Automation/src/Agent.cpp" "modeling-core/Cellular Automation/include/Agent.h" "modeling-core/Cellular Automation/src/CellularAutomaton.cpp" "modeling-core/Cellular Automation/include/CellularAutomaton.h" "modeling-core/Cellular Automation/src/Environment.cpp" "modeling-core/Cellular Automation/include/Environment.h")