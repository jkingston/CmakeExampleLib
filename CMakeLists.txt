# CMake build system

# The minimum CMake version required to build this project
cmake_minimum_required(VERSION 2.8.3)

# Set a new CMake project
set(PROJECT_NAME ExampleLib)
project(${PROJECT_NAME})

# Enable c++11
add_definitions(--std=c++11)

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)

# Set source file directories
set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
set(SRC_DIR ${CMAKE_SOURCE_DIR}/src)

# Add library files
add_library(${PROJECT_NAME} STATIC
  ${INCLUDE_DIR}/ExampleLib/ExampleObj.hpp
  ${SRC_DIR}/ExampleLib/ExampleObj.cpp
)

# Set up include directories
include_directories(
  ${INCLUDE_DIR}
)

# Set up link directories
link_directories(
)

# Set up testing
include(CTest)
include(GTest)
add_subdirectory(test)
