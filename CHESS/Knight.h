#pragma once
#include"Picese.h"
#include"Square.h"
namespace Chess {
    class Knight :
        public Pieces
    {

    public:
        Knight(Square* pp = nullptr) :Chess::Pieces(pp->getColor(), pp->getType()) {};
        Knight() :Pieces(Chess::TeamColor::NONE, Chess::PicesesType::Knight) {};
        Knight(TeamColor t) :Pieces(t, PicesesType::Knight) {};
        bool Move();
    };
}
