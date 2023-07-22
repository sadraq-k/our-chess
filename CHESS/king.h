#pragma once
#include "Picese.h"
#include"Square.h"

namespace Chess {

    class king :
        public Pieces
    {
        const std::string symbol = "k "; //  const Chess::MyPieces symbol = Chess::MyPieces::WPawn;
public:
    king(Square*pp = nullptr):Chess::Pieces(pp->getColor(), pp->getType()){};
    king() :Pieces(Chess::TeamColor::NONE, Chess::PicesesType::None) {};
    bool Move();
    };

}