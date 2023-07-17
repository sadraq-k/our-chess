
#include "Square.h"

#include<iostream>
#include<iomanip>
#include<string>
using namespace Chess;





void Square::print() {
	std::cout << std::setw(3) << BackPices() << "|";
}

void Square::setP(std::unique_ptr<Pieces>& mp) {
	piece = std::move(mp);
}


std::string Square::BackPices()
{
	switch (piece->BackPicType())
	{
	case Chess::MyPiceses::None:
		return "  ";
	case Chess::MyPiceses::WPawn:
		return "p ";
	case Chess::MyPiceses::WRock:
		return "r ";
	case Chess::MyPiceses::WBishop:
		return "b ";
	case Chess::MyPiceses::WKnight:
		return "n ";
	case Chess::MyPiceses::WKing:
		return "k ";
	case Chess::MyPiceses::WQueen:
		return "q ";
	case Chess::MyPiceses::BPawn:
		return "P ";
	case Chess::MyPiceses::BRock:
		return "R ";
	case Chess::MyPiceses::BBishop:
		return "B ";
	case Chess::MyPiceses::BKnight:
		return "N ";
	case Chess::MyPiceses::BKing:
		return "K ";
	case Chess::MyPiceses::BQueen:
		return "Q ";
	default:
		return "ER";

	}
}



Chess::Square::Square()
{
}

Chess::Square::~Square()
{
}

void Chess::Square::setRC(int r, int c)
{
	row = r;
	column = c;
}


