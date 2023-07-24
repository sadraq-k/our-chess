#pragma once
#include "Picese.h"
#include"Square.h"

namespace Chess {

    class king :
        public Pieces
    {
        
public:
    king(Square*pp = nullptr):Chess::Pieces(pp->getColor(), pp->getType()){};
    king() :Pieces(Chess::TeamColor::NONE, Chess::PicesesType::King) {};
    king(TeamColor t) :Pieces(t, PicesesType::King) {};
    bool Move();
    };

}