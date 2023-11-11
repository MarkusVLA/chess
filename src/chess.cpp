#include "chess.hpp"
#include "utils/color.h"

ChessBoard::ChessBoard(unsigned int edgeSize): size_(pow(edgeSize,2)) { }

ChessBoard::~ChessBoard() { }

unsigned int ChessBoard::GetEdge() const {
    return sqrt(size_);
}

std::string ChessBoard::GetGrid(unsigned int x, unsigned int y){
    if ((x + y) % 2) return "\u2588";
    return " ";
}

unsigned char ChessBoard::GetGridColor(unsigned int x, unsigned int y){
    return (unsigned char) (((x + y) % 2) * 255);
}

bool ChessBoard::SaveBoardAsImage(std::string outPath) {
    // Save chess board as a ppm image.
    std::ofstream ofs(outPath);
    
    if (!ofs){
        std::cerr << "Failed to open file" << std::endl; 
        return false;  
    } 

    ofs << "P6\n" << GetEdge() << " " << GetEdge() << "\n255\n";

    for (unsigned int i = 0; i < GetEdge(); i++){
        for(unsigned int j = 0; j < GetEdge(); j++){

            Color pixelCol(GetGridColor(i, j));
            ofs << pixelCol;
            
        }
    }

    ofs.close();
    return true; 
}


std::ostream &operator<<(std::ostream &os, ChessBoard &board) {

    for (unsigned int i = 0; i < board.GetEdge(); i++){
        for(unsigned int j = 0; j < board.GetEdge(); j++){
            os << board.GetGrid(i, j) << " ";
        }
        // New line =)
        os << std::endl;   
    }
    return os;
}