#pragma once
#include"Picese.h"
#include"Square.h"
namespace Chess {
    class Queen :
        public Pieces
    {
        const std::string symbol = "q "; // or const Chess::MyPieces symbol = Chess::MyPieces::WPawn;

    public:
    Queen(Square*pp = nullptr):Chess::Pieces(pp->getColor(), pp->getType()){};
bool Move();

    };

}