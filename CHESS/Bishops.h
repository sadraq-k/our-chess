#pragma once
#include"Picese.h"
#include"Square.h"

namespace Chess
{
    class Bishop :
        public Pieces
    {

    public:
        Bishop(Square* pp = nullptr) :Chess::Pieces(pp->getColor(), pp->getType()) {};
        Bishop() :Pieces(Chess::TeamColor::NONE, Chess::PicesesType::Bishop) {};
        Bishop(TeamColor t) :Pieces(t, PicesesType::Bishop) {};

        bool Move();
    };
}

