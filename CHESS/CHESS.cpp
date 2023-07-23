#include"Board.h"
#include"Picese.h"
#include"Rock.h"
#include"Queen.h"
#include"king.h"
#include"Knight.h"
#include"Pawn.h"
#include"Bishop.h"
#include<sstream>



int main()
{
	Chess::Board mybored;
	mybored.PrintBoard();
	std::string loc="a1";
	std::string where ="a1";
	while (true)
	{
		std::cout << "enter which Piece? ";
		std::cin >> loc;
		std::cout << "Where ? ";
		std::cin >> where;
		system("cls");
		if(input(mybored.getSquare()))
			mybored.ChangeScope(loc, where);
		else
			std::cout<<"The piece cannot move there"<<std::endl;
		mybored.PrintBoard();
	}
	return 0;
}


