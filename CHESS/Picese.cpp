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

std::string Chess::Pieces::getPieceSymbol(int isBlack) const
{
	if (isBlack) {
		switch (type)
		{
		case Chess::PicesesType::None:
			return "  ";
		case Chess::PicesesType::Pawn:
			return "p ";
		case Chess::PicesesType::Rock:
			return "r ";
		case Chess::PicesesType::Bishop:
			return "b ";
		case Chess::PicesesType::Knight:
			return "n ";
		case Chess::PicesesType::King:
			return "k ";
		case Chess::PicesesType::Queen:
			return "q ";
		default:
			return "ER";
		}
	}
	else
	{
		switch (type)
		{
		case Chess::PicesesType::None:
			return "  ";
		case Chess::PicesesType::Pawn:
			return "P ";
		case Chess::PicesesType::Rock:
			return "R ";
		case Chess::PicesesType::Bishop:
			return "B ";
		case Chess::PicesesType::Knight:
			return "N ";
		case Chess::PicesesType::King:
			return "K ";
		case Chess::PicesesType::Queen:
			return "Q ";
		default:
			return "ER";
		}
	}
}
TeamColor Chess::Pieces::getColor(){
			return color;
	}
PicesesType Chess::Pieces::getType(){
			return type;
	}

bool Chess::Pieces::Move(){
	return true;
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
