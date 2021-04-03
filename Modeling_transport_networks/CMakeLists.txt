cmake_minimum_required(VERSION 3.17)
project(Modeling_transport_networks)

set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_PREFIX_PATH "F:\\Programs\\Qt-5-15\\5.15.2")
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5Widgets CONFIG
        PATHS F:\\Programs\\Qt-5-15\\5.15.2\\mingw81_64\\lib\\cmake\\Qt5Widgets
        NO_DEFAULT_PATH)
list(APPEND THIRD_PARTY_LIBS Qt5::Widgets Qt5::Core)

add_executable(Modeling_transport_networks main.cpp modeling-core/graph/include/GNode.h modeling-core/graph/include/NodeId.h modeling-core/graph/src/NodeImpl.h modeling-core/graph/src/NListImplLinkedList.h modeling-core/utils/include/Allocator.h modeling-core/utils/src/AllocatorImpl.h "modeling-core/Cellular Automation/src/Agent.cpp" "modeling-core/Cellular Automation/include/Agent.h" "modeling-core/Cellular Automation/src/CellularAutomaton.cpp" "modeling-core/Cellular Automation/include/CellularAutomaton.h" "modeling-core/Cellular Automation/src/Environment.cpp" "modeling-core/Cellular Automation/include/Environment.h" "graphics-core/ceullar automata/include/AutomataGridView.h" "graphics-core/ceullar automata/src/AutomataGridView.cpp"  "graphics-core/ceullar automata/include/AutomataView.h")

target_link_libraries(Modeling_transport_networks Qt5::Widgets Qt5::Core Qt5::Gui)