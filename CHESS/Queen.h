#pragma once
#include"Picese.h"
#include"Square.h"
namespace Chess {
    class Queen :
        public Pieces
    {
        

    public:
    Queen(Square*pp = nullptr):Chess::Pieces(pp->getColor(), pp->getType()){};
    Queen() :Pieces(Chess::TeamColor::NONE, Chess::PicesesType::Queen) {}; // in constuctor bashe
    Queen(TeamColor t) :Pieces(t, PicesesType::Queen){};
bool Move();

    };

}