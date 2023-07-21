
#include"Board.h"
#include"Picese.h"
#include"Rock.h"
#include"Queen.h"
#include"king.h"
#include"Knight.h"
#include"Pawn.h"
#include"Bishop.h"
#include<sstream>


bool input( Chess::Square& squareTemp){
	bool checkmove;

	Chess::Pieces *piece = nullptr;
	
	std::istringstream iss(squareTemp.getPieceSymbol());
	char type;
	iss>>type;

if(std::tolower(type) == 'b'){
	Chess::Bishop bishop(&squareTemp);
	piece = &bishop;
}
if(std::tolower(type) == 'k'){
	Chess::king king(&squareTemp);
	piece = &king;
}
if(std::tolower(type) == 'n'){
	Chess::Knight knight(&squareTemp);
	piece = &knight;
}
if(std::tolower(type) == 'p'){
	Chess::Pawn pawn(&squareTemp);	
	piece = &pawn;
}
if(std::tolower(type) == 'q'){
	Chess::Queen queen(&squareTemp);
	piece = &queen;
}
if(std::tolower(type) == 'r'){
	Chess::Rock rock(&squareTemp);
	piece = &rock;
}

checkmove  = piece->Move();
return checkmove;
}

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


