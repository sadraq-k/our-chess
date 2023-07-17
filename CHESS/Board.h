#pragma once
#include"Square.h"
#include<iostream>

#include<memory>
namespace Chess {
#define EL std::cout << std::endl;	

	class Board
	{
		//MyPiceses piece;
		Chess::Square* build = new Chess::Square[64];


		//Chess::Square build[64];
		//std::unique_ptr<Chess::Square[]> build(new Chess::Square[64]);
		//auto build = std::make_unique<Chess::Square[]>(64);

		void putAllPieces();
	public:
		static int number;



		Board();
		~Board();
		void PrintBoard();
		void changeScope(std::string& loc, std::string& where);

	};

}