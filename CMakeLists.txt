# CmakeLists
# Ruiyang Ji - github.com/RFE

cmake_minimum_required(VERSION 3.21)
project(RFE)

set(CMAKE_CXX_STANDARD 20)

add_executable(RFE main.cpp
        src/setting/setting.hpp
        src/lattice/D2Q9.hpp
        src/setting/mcmp_setting.hpp
        src/general/timer.hpp src/lattice/D3Q19.hpp src/population/population.hpp)

