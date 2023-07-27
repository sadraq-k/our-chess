//
// Created by User on 7/27/2023.
//

#ifndef COPYCHESS_ROCK_H
#define COPYCHESS_ROCK_H

#endif //COPYCHESS_ROCK_H
#pragma once
#include "Picese.h"
#include "Square.h"
namespace Chess
{
    class Rock :public Pieces
    {
    public:
        Rock(Square*pp = nullptr):Chess::Pieces(pp->getColor(), pp->getType()){};
        Rock() :Pieces(Chess::TeamColor::NONE, Chess::PicesesType::Rock) {};
        Rock(TeamColor t) :Pieces(t, PicesesType::Rock) {};

        bool Move();
    };

}