#include"Pieces.h"

using namespace Chess;

Pieces::Pieces(TeamColor tc, MyPiceses p) :team(tc), piece(p) {};

Pieces::~Pieces() {}
void Chess::Pieces::changeP(MyPiceses p)
{
	piece = p;
}
void Chess::Pieces::changeT(TeamColor tc)
{
	team = tc;
}

MyPiceses& Pieces::BackPicType()
{
	return piece;
}




/*std::string BackPices(MyPiceses mp)
{
	switch (mp)
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

	}*/
