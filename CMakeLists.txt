cmake_minimum_required(VERSION 3.8)
project(Graph_Coloring)

set(CMAKE_C_STANDARD 99)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY C:/Users/tolun/Documents/GitHub/Graph-Coloring)

set(SOURCE_FILES main.c Graph.c Graph.h readFile.c readFile.h GraphColoring.h GraphColoring.c)
add_executable(Graph_Coloring ${SOURCE_FILES})