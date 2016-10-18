cmake_minimum_required(VERSION 3.6)
project(spoj)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

#set(SOURCE_FILES p1_test.cpp)
set(SOURCE_FILES p2_prime1.cpp)
add_executable(spoj ${SOURCE_FILES})