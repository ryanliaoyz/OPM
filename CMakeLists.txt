cmake_minimum_required(VERSION 3.26)
project(OPM)

set(CMAKE_CXX_STANDARD 23)

add_executable(OPM
        main.cpp
        src/BlackScholes.cpp
        libs/math/NormalDistribution.cpp)
