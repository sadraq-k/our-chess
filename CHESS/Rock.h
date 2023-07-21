#pragma once
#include "Picese.h"
#include"Square.h"
namespace Chess
{
	class Rock :public Pieces
	{
	public:
		Rock(Square*pp = nullptr):Chess::Pieces(pp->getColor(), pp->getType()){};

bool Move();
	};

}