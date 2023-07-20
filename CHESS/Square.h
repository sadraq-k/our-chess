#pragma once
#include"Units.h"
#include"Picese.h"
#include<string>
#include<memory>
namespace Chess {




	class Square
	{
		int row; 
		int column;
		//Chess::PicesesType piece;
		//Pieces* piece;
		std::unique_ptr<Pieces> piece;
	public:
		bool IsPiecesEmpty();
		std::unique_ptr<Pieces>& getPiece();
		Square();
		~Square();
		void setRC(int r, int c);
		void print();
		void setP(std::unique_ptr<Pieces> mp);

		

		std::string getPieceSymbol() const;
	};

}