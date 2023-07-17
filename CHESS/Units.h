#pragma once

namespace Chess {

	enum class TeamColor
	{
		NONE = -1,
		White = 0,
		Black = 1,
	};

	enum class MyPiceses
	{
		None = 0,
		WPawn = 1,
		WRock = 2,
		WBishop = 3,
		WKnight = 4,
		WKing = 5,
		WQueen = 6,


		BPawn = 11,
		BRock = 12,
		BBishop = 13,
		BKnight = 14,
		BKing = 15,
		BQueen = 16

	};

	typedef enum this_is_my_char_list
	{
		a = 1, A = 1,
		b, B = 2,
		c, C = 3,
		d, D = 4,
		e, E = 5,
		f, F = 6,
		g, G = 7,
		h, H = 8
	}TIMCL;

}
