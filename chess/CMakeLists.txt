cmake_minimum_required(VERSION 3.25)
project(chess)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(chess
        Bored.cpp
        Bored.h
        chess.cpp
        Pieces.cpp
        Pieces.h
        Square.cpp
        Square.h)
