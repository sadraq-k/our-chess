#pragma once
#include"Picese.h"
#include"Square.h"
namespace Chess {


    class Pawn : public Pieces
    {
        const std::string symbol = "p "; // or const Chess::MyPieces symbol = Chess::MyPieces::WPawn;

public:
    Pawn(Square*pp = nullptr):Chess::Pieces(pp->getColor(), pp->getType()){};
    Pawn() :Pieces(Chess::TeamColor::NONE, Chess::PicesesType::None) {};
    Pawn(TeamColor t) :Pieces(t, PicesesType::None) {};
    bool Move();
    };


}