cmake_minimum_required(VERSION 3.24)
project(gobang)

set(CMAKE_CXX_STANDARD 23)

add_executable(gobang main.cpp main.h ChessManager.cpp ChessManager.h)
