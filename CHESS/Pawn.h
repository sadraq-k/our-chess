#pragma once
#include"Picese.h"
#include"Square.h"
namespace Chess {


    class Pawn : public Pieces
    {


    public:
        Pawn(Square* pp = nullptr) :Chess::Pieces(pp->getColor(), pp->getType()) {};
        Pawn() :Pieces(Chess::TeamColor::NONE, Chess::PicesesType::Pawn) {};
        Pawn(TeamColor t) :Pieces(t, PicesesType::Pawn) {};
        bool Move();
    };


}