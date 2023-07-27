//
// Created by User on 7/27/2023.
//

#ifndef COPYCHESS_KNIGHT_H
#define COPYCHESS_KNIGHT_H

#endif //COPYCHESS_KNIGHT_H
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
