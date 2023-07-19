
#include "Square.h"
#include"Units.h"
#include<iostream>
#include<iomanip>
#include<string>
using namespace Chess;





void Square::print() {
	std::cout << std::setw(3) << getPieceSymbol() << "|";   
}

void Square::setP(std::unique_ptr<Pieces> mp) {
	piece = std::move(mp);
}


std::string Square::getPieceSymbol() const
{
	if (piece)
		return piece->getPieceSymbol();
	else
		return "  ";
		
}
std::unique_ptr<Pieces>& Square::getPiece() {
	return piece;
}



Chess::Square::Square()
{
	piece = std::make_unique<Pieces>(Chess::TeamColor::NONE, Chess::PicesesType::BBishop);
}

Chess::Square::~Square()
{
}

void Chess::Square::setRC(int r, int c)
{
	row = r;
	column = c;
}

