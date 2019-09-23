cmake_minimum_required(VERSION 3.14)
project(hashTable)

set(CMAKE_CXX_STANDARD 14)

add_executable(hashTable main.cpp Student.cpp Student.h MyFactory.cpp MyFactory.h List.cpp List.h)