#include"Picese.h"

using namespace Chess;

Pieces::Pieces(TeamColor tc, PicesesType p) :color(tc), type(p) {};

Pieces::~Pieces() {}
void Chess::Pieces::changeP(PicesesType pt)
{
	type = pt;
}
void Chess::Pieces::changeT(TeamColor tc)
{
	color = tc;
}

PicesesType& Pieces::BackPicType()
{
	return type;
}

std::string Chess::Pieces::getPieceSymbol() const
{
	switch (type)
	{
	case Chess::PicesesType::None:
		return "  ";
	case Chess::PicesesType::WPawn:
		return "p ";
	case Chess::PicesesType::WRock:
		return "r ";
	case Chess::PicesesType::WBishop:
		return "b ";
	case Chess::PicesesType::WKnight:
		return "n ";
	case Chess::PicesesType::WKing:
		return "k ";
	case Chess::PicesesType::WQueen:
		return "q ";
	case Chess::PicesesType::BPawn:
		return "P ";
	case Chess::PicesesType::BRock:
		return "R ";
	case Chess::PicesesType::BBishop:
		return "B ";
	case Chess::PicesesType::BKnight:
		return "N ";
	case Chess::PicesesType::BKing:
		return "K ";
	case Chess::PicesesType::BQueen:
		return "Q ";
	default:
		return "ER";
	}
}




/*std::string BackPices(PicesesType mp) const
{
	switch (mp)
	{
	case Chess::PicesesType::None:
		return "  ";
	case Chess::PicesesType::WPawn:
		return "p ";
	case Chess::PicesesType::WRock:
		return "r ";
	case Chess::PicesesType::WBishop:
		return "b ";
	case Chess::PicesesType::WKnight:
		return "n ";
	case Chess::PicesesType::WKing:
		return "k ";
	case Chess::PicesesType::WQueen:
		return "q ";
	case Chess::PicesesType::BPawn:
		return "P ";
	case Chess::PicesesType::BRock:
		return "R ";
	case Chess::PicesesType::BBishop:
		return "B ";
	case Chess::PicesesType::BKnight:
		return "N ";
	case Chess::PicesesType::BKing:
		return "K ";
	case Chess::PicesesType::BQueen:
		return "Q ";
	default:
		return "ER";

	}*/
