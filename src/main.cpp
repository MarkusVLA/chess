#include "chess.hpp"


int main(void){

    ChessBoard board_2(2);
    ChessBoard board_4(4);
    ChessBoard board_8(8);
    ChessBoard board_16(16);
    ChessBoard board_32(32);

    std::cout << board_2 << std::endl;
    std::cout << board_4 << std::endl;
    std::cout << board_8 << std::endl;
    std::cout << board_16 << std::endl;
    std::cout << board_32 << std::endl;

    board_16.SaveBoardAsImage("chess.ppm");


    ChessBoard boardNice(1024);
    boardNice.SaveBoardAsImage("nice.ppm");

    return 0;
}