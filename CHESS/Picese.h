#pragma once
#include<string>
#include<iostream>
#include"Units.h"
namespace Chess
{


	class Pieces
	{
		TeamColor color;
		PicesesType type;

	public:
		Pieces(TeamColor c, PicesesType t);
		~Pieces();
		//virtual void Move();
		void changeP(PicesesType pt);
		void changeT(TeamColor tc);
		PicesesType& BackPicType();
		std::string getPieceSymbol() const;
		virtual bool Move();
		TeamColor getColor();
		PicesesType getType();
			
	
		
	};

}
