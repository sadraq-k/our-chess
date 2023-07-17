#pragma once
#include<string>
#include<iostream>
#include"Units.h"
namespace Chess
{


	class Pieces
	{
		TeamColor team;
		MyPiceses piece;

	public:
		Pieces(TeamColor tc, MyPiceses p);
		~Pieces();
		//virtual void Move() = 0;
		void changeP(MyPiceses p);
		void changeT(TeamColor tc);
		MyPiceses& BackPicType();

	};

}