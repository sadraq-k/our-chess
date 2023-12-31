#pragma once

namespace Chess {

	enum class TeamColor
	{
		NONE = -1,
		White = 0,
		Black = 1,
	};
	/*
	enum class PicesesType
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

	};  */
	enum class PicesesType
	{
		None = 0,
		Pawn = 1,
		Rock = 2,
		Bishop = 3,
		Knight = 4,
		King = 5,
		Queen = 6,
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

	enum class MoveType {
		NotValid = -1,
		EmptySpace = 0,
		Capture = 1,
		Passant = 2,
		Castling = 3,
		Promoion = 4	

	};
}
