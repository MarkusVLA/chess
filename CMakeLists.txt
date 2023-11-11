cmake_minimum_required(VERSION 3.10)

project(ChessBoard VERSION 0.1)



add_executable(chess 

    src/main.cpp
    src/utils/color.h
    src/chess.cpp
    src/chess.hpp
    
    )

add_compile_options(-Wall std=c++17)
