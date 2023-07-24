#pragma once
#include "Picese.h"
#include"Square.h"
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