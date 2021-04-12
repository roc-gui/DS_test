cmake_minimum_required(VERSION 3.17)
project(test C)

set(CMAKE_C_STANDARD 11)

INCLUDE_DIRECTORIES("${CMAKE_SOURCE_DIR}/include")
set(PROJECT_TEST_BINARY_DIR ${CMAKE_SOURCE_DIR}/build/test/)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_TEST_BINARY_DIR})

add_executable(test_SqList SqList_test.c)