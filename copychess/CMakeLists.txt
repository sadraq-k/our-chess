cmake_minimum_required(VERSION 3.25)
project(copychess)

set(CMAKE_CXX_STANDARD 17)

add_executable(copychess chess.cpp bishops.cpp board.cpp picese.cpp square.cpp king.cpp knight.cpp pawn.cpp queen.cpp rock.cpp)
