
#include "Square.h"
#include"Units.h"
#include<iostream>
#include<iomanip>
#include<string>
#include"Queen.h"
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
		return piece->getPieceSymbol(int(piece->getColor()));
	else
		return "  ";
		
}

std::unique_ptr<Pieces>& Square::getPiece() {
	return piece;
}



Chess::Square::Square()
{
	piece = std::make_unique<Chess::Pieces>(Chess::TeamColor::NONE, Chess::PicesesType::None);
}

Chess::Square::~Square()
{
}

void Chess::Square::setRC(int r, int c)
{
	row = r;
	column = c;
}

bool Square::IsPiecesEmpty() {
	return (piece->BackPicType() == PicesesType::None); 
}

PicesesType Square::getType() {
		return piece->Chess::Pieces::getType();
}

TeamColor Square::getColor() {
	return piece->Chess::Pieces::getColor();
}