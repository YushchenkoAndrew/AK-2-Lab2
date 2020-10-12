cmake_minimum_required(VERSION 3.8)

project (AK-2-Lab2)
set(CMAKE_CXX_STANDARD 14)

# Generate the static library from the sources
add_library(calc STATIC calculator.cpp)
add_executable(AK-2-Lab2 Main.cpp)
