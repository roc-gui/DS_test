cmake_minimum_required(VERSION 3.17)
project(DataStruct)

set(CMAKE_C_STANDARD 11)

INCLUDE_DIRECTORIES("${CMAKE_SOURCE_DIR}/include")
set(PROJECT_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)
aux_source_directory(${CMAKE_SOURCE_DIR}/src proj_src)
#add_executable(${PROJECT_NAME} ${proj_src})
add_subdirectory(test)

enable_testing()
add_test(test_SqList ${CMAKE_SOURCE_DIR}/build/test/test_SqList)
