#include "Board.h"

using namespace Chess;

int Board::number = 0;

Board::Board() {
	for (int y = 0; y < 8; y++) {
		for (int x = 0; x < 8; x++) {
			build[y * 8 + x].setRC(x + 1, y + 1);
		}
	}
	putAllPieces();
}
Board::~Board() {

	build = nullptr;
	for (int i = 0; i < 8; ++i)
		delete[] build;
}

void Board::putAllPieces() {
	Pieces mp(TeamColor::Black, MyPiceses::WPawn);
	std::unique_ptr<Pieces> pmp{ &mp };
	MyPiceses Blist[8] = { MyPiceses::BRock,MyPiceses::BKnight,MyPiceses::BBishop,MyPiceses::BKing,MyPiceses::BQueen,MyPiceses::BBishop,MyPiceses::BKnight,MyPiceses::BRock }; // black liat
	MyPiceses Wlist[8] = { MyPiceses::WRock,MyPiceses::WKnight,MyPiceses::WBishop,MyPiceses::WKing,MyPiceses::WQueen,MyPiceses::WBishop,MyPiceses::WKnight,MyPiceses::WRock }; // white list
	for (int x = 0; x < 8; x++)
	{
		mp.changeP(Blist[x]);
		build[x].setP(pmp);
	}
	mp.changeP(MyPiceses::BPawn);

	for (int x = 0; x < 8; x++) build[x + 8].setP(pmp);
	mp.changeT(Chess::TeamColor::NONE);
	mp.changeP(MyPiceses::None);

	for (int y = 2; y < 6; y++)
	{
		for (int x = 0; x < 8; x++) build[y * 8 + x].setP(pmp);
	}
	mp.changeT(TeamColor::White);
	mp.changeP(MyPiceses::WPawn);
	for (int x = 0; x < 8; x++)
	{
		build[x + 48].setP(pmp);
	}
	for (int x = 0; x < 8; x++)
	{
		mp.changeP(Wlist[x]);
		build[x + 56].setP(pmp);
	}
	pmp = nullptr;
}
void Board::PrintBoard() {
	const char alphaList[9] = "abcdefgh";
	EL; EL; EL;
	std::cout << "\t\t" << "    a   b   c   d   e   f   g   h"; EL;
	std::cout << "\t\t  ";
	for (int x = 0; x < 8; x++)
		std::cout << "+---";
	std::cout << "+"; EL;
	for (int y = 0; y < 8; y++) {
		std::cout << "\t\t" << y << " |";

		for (int x = 0; x < 8; x++) {
			build[y * 8 + x].print();
		}
		std::cout << " " << y;
		EL;
		std::cout << "\t\t  ";
		for (int x = 0; x < 8; x++)
			std::cout << "+---";
		std::cout << "+";
		EL;
	}
	std::cout << "\t\t" << "    a   b   c   d   e   f   g   h"; EL;
}


void Board::changeScope(std::string& loc, std::string& where)
{
	int x = loc[0] - 96;
	int y = loc[1] - 47;
}


