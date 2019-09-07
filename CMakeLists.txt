# cmake_minimum_required(VERSION <specify CMake version here>)
project(battleship C)

set(CMAKE_C_STANDARD 99)

add_executable(battleship main.c game_board.h game_board.c game_piece.h game_piece.c)