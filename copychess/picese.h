//
// Created by User on 7/27/2023.
//

#ifndef COPYCHESS_PICESE_H
#define COPYCHESS_PICESE_H

#endif //COPYCHESS_PICESE_H
#pragma once
#include<string>
#include<iostream>
#include"Units.h"
namespace Chess
{


    class Pieces
    {
        TeamColor color;
        PicesesType type;

    public:
        Pieces(TeamColor c, PicesesType t);
        ~Pieces();
        //virtual void Move();
        void changeP(PicesesType pt);
        void changeT(TeamColor tc);
        PicesesType& BackPicType();
        std::string getPieceSymbol(int isBlack) const;
        virtual bool Move();
        TeamColor getColor();
        PicesesType getType();



    };

}