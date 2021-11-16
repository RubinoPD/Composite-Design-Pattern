cmake_minimum_required(VERSION 3.20)
project(untitled1)

set(CMAKE_C_COMPILER_WORKS 1)
set(CMAKE_CXX_COMPILER_WORKS 1)
set(CMAKE_TRY_COMPILE_TARGET_TYPE "STATIC_LIBRARY")
set(CMAKE_CXX_STANDARD 14)


add_executable(untitled1 main.cpp Component.h Leaf.cpp Leaf.h Composite.cpp Composite.h)
