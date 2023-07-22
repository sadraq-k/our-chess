#pragma once
#include"Picese.h"
#include"Square.h"

namespace Chess
{
    class Bishop :
        public Pieces
    {
        const std::string symbol = "b ";
public:
    Bishop(Square*pp = nullptr):Chess::Pieces(pp->getColor(), pp->getType()){};
    Bishop() :Pieces(Chess::TeamColor::NONE, Chess::PicesesType::None) {};
  bool Move();
      
    };
}
