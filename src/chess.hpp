/**
 * @file chess.hpp
 * @author Markus Lång
 * @brief 
 * @version 0.1
 * @date 2023-11-11
 */


#ifndef CHESS_HPP
#define CHESS_HPP


#include <iostream>
#include <string>

class ChessBoard {

private:

    unsigned int size_;

public:

    ChessBoard(unsigned int edgeSize);
    ~ChessBoard();
    unsigned int GetEdge() const;
    std::string GetGrid(unsigned int x, unsigned int y);
    unsigned char GetGridColor(unsigned int x, unsigned int y);
    bool SaveBoardAsImage(std::string outPath);
    friend std::ostream &operator<<(std::ostream &os, ChessBoard &board);
    
    
};

#endif // CHESS_HPP