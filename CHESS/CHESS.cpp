#include"Board.h"
#include"Picese.h"
#include"Rock.h"
#include"Queen.h"
#include"king.h"
#include"Knight.h"
#include"Pawn.h"
#include"Bishop.h"
#include<sstream>


bool input(Chess::Square& squareTemp){
	bool checkmove;

	Chess::Pieces *piece = nullptr;
	
	std::istringstream iss(squareTemp.getPieceSymbol());
	char type;
	iss >> type;
	Chess::PicesesType pt = squareTemp.getType();

if( pt == Chess::PicesesType::BBishop || pt == Chess::PicesesType::WBishop){
	Chess::Bishop bishop(&squareTemp);
	piece = &bishop;
}
else if (pt == Chess::PicesesType::BKing || pt == Chess::PicesesType::WKing) {
	Chess::king king(&squareTemp);
	piece = &king;
}
else if (pt == Chess::PicesesType::BKnight || pt == Chess::PicesesType::WKnight) {
	Chess::Knight knight(&squareTemp);
	piece = &knight;
}
else if (pt == Chess::PicesesType::BPawn || pt == Chess::PicesesType::WPawn) {
	Chess::Pawn pawn(&squareTemp);
	piece = &pawn;
}
else if (pt == Chess::PicesesType::BQueen || pt == Chess::PicesesType::WQueen) {
	Chess::Queen queen(&squareTemp);
	piece = &queen;
}
else if (pt == Chess::PicesesType::BRock || pt == Chess::PicesesType::WRock) {
	Chess::Rock rock(&squareTemp);
	piece = &rock;
}
else {
	std::cerr << "wrong Piece type!";
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


