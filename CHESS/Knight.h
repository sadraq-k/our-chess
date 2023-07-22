#pragma once
#include"Picese.h"
#include"Square.h"
namespace Chess {
    class Knight :
        public Pieces
    {
        const std::string symbol = "n "; // or const Chess::MyPieces symbol = Chess::MyPieces::WPawn;
public:
    Knight(Square*pp = nullptr):Chess::Pieces(pp->getColor(), pp->getType()){};
    Knight() :Pieces(Chess::TeamColor::NONE, Chess::PicesesType::None) {};
    Knight(TeamColor t) :Pieces(t, PicesesType::None) {};
    };
bool Move();
}