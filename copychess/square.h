//
// Created by User on 7/27/2023.
//

#ifndef COPYCHESS_SQUARE_H
#define COPYCHESS_SQUARE_H

#endif //COPYCHESS_SQUARE_H
#pragma once
#include"Units.h"
#include"Picese.h"
#include<string>
#include<memory>
namespace Chess
{




    class Square
    {
        int row;
        int column;
        //Chess::PicesesType piece;
        //Pieces* piece;

    public:
        std::unique_ptr<Pieces> piece;
        bool IsPiecesEmpty();
        std::unique_ptr<Pieces>& getPiece();
        Square();
        ~Square();
        void setRC(int r, int c);
        void print();
        void setP(std::unique_ptr<Pieces> mp);

        TeamColor getColor();
        PicesesType getType();



        std::string getPieceSymbol() const;
    };

}