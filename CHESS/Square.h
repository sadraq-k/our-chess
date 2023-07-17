#pragma once
#include"Units.h"
#include"Pieces.h"
#include<string>
#include<memory>
namespace Chess {




	class Square
	{
		int row;
		int column;
		//Chess::MyPiceses piece;
		//Pieces* piece;
		std::unique_ptr<Pieces> piece;
	public:
		Square();
		~Square();
		void setRC(int r, int c);
		void print();
		void setP(std::unique_ptr<Pieces>& mp);
		std::string BackPices();
	};

}