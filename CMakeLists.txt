cmake_minimum_required(VERSION 2.8.9)

project (AK-2-Lab2)

# Generate the static library from the sources
add_library(calc STATIC calculator.cpp)
add_executable(${PROJECT_NAME} Main.cpp)
target_link_libraries(${PROJECT_NAME} CalcLab2)
