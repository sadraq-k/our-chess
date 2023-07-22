#include "Board.h"

using namespace Chess;

int Board::number = 0;

Board::Board() {
	build = new Chess::Square[64]();
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
	//Pieces mp(TeamColor::Black, PicesesType::WPawn); 
	//std::unique_ptr<Pieces> pmp{ &mp };
	PicesesType Blist[8] = { PicesesType::BRock,PicesesType::BKnight,PicesesType::BBishop,PicesesType::BKing,PicesesType::BQueen,PicesesType::BBishop,PicesesType::BKnight,PicesesType::BRock }; // black liat
	PicesesType Wlist[8] = { PicesesType::WRock,PicesesType::WKnight,PicesesType::WBishop,PicesesType::WKing,PicesesType::WQueen,PicesesType::WBishop,PicesesType::WKnight,PicesesType::WRock }; // white list
	//New Changes
	Bishop b[4] = { (TeamColor::White,PicesesType::WBishop),(TeamColor::White,PicesesType::WBishop),(TeamColor::Black,PicesesType::BBishop),(TeamColor::Black,PicesesType::BBishop) };
	//New Changes
	for (int x = 0; x < 8; x++)
	{
		//mp.changeP(Blist[x]);
		build[x].setP(std::make_unique<Pieces>(TeamColor::Black, Blist[x]));
		
	}
	//mp.changeP(PicesesType::BPawn);

	for (int x = 0; x < 8; x++) build[x + 8].setP(std::make_unique<Pieces>(TeamColor::Black,Chess::PicesesType::BPawn));
	//mp.changeT(Chess::TeamColor::NONE);
	//mp.changeP(PicesesType::None);

	for (int y = 2; y < 6; y++)
	{
		for (int x = 0; x < 8; x++) build[y * 8 + x].setP(std::make_unique<Pieces>(TeamColor::NONE, Chess::PicesesType::None));
	}
	//mp.changeT(TeamColor::White);
	//mp.changeP(PicesesType::WPawn);
	for (int x = 0; x < 8; x++)
	{
		build[x + 48].setP(std::make_unique<Pieces>(TeamColor::White, Chess::PicesesType::WPawn));
	}
	for (int x = 0; x < 8; x++)
	{
		//mp.changeP(Wlist[x]);
		build[x + 56].setP(std::make_unique<Pieces>(TeamColor::White, Wlist[x]));
	}
	//pmp = nullptr;
}

void Board::PrintBoard() {
	//const char alphaList[9] = "abcdefgh";
	EL; EL; EL;
	std::cout << "\t\t" << "    a   b   c   d   e   f   g   h"; EL;       
	std::cout << "\t\t  ";
	for (int x = 0; x < 8; x++)
		std::cout << "+---";
	std::cout << "+"; EL;
	for (int y = 0; y < 8; y++) {
		std::cout << "\t\t" << y+1 << " |";

		for (int x = 0; x < 8; x++) {
			build[y * 8 + x].print(); 
		}
		std::cout << " " << y+1;
		EL;
		std::cout << "\t\t  ";
		for (int x = 0; x < 8; x++)
			std::cout << "+---";
		std::cout << "+";
		EL;
	}
	std::cout << "\t\t" << "    a   b   c   d   e   f   g   h"; EL;
}


void Board::ChangeScope(std::string& loc, std::string& where)
{
	//int x = loc[0] - 96;
	//int y = loc[1] - 47;

		// Convert the locations to row and column indices
		int row1 = loc[1] - '1';
		int col1 = tolower(loc[0]) - 'a';
		int row2 = where[1] - '1';
		int col2 = tolower(where[0]) - 'a';
		

		// Perform bounds checking to ensure the indices are within the valid range
		if (row1 < 0 || row1 >= 8 || col1 < 0 || col1 >= 8 ||
			row2 < 0 || row2 >= 8 || col2 < 0 || col2 >= 8) {
			std::cout << "Invalid square coordinates." << std::endl;
			return;
		}

		// Get the references to the squares
		Square& square1 = build[row1 * 8 + col1];
		Square& square2 = build[row2 * 8 + col2];


		// Check if both squares are valid and one has a piece while the other is empty
		if (!square1.IsPiecesEmpty() && square2.IsPiecesEmpty()) {
			// Swap the pieces
			std::unique_ptr<Pieces>& piece1 = square1.getPiece();
			std::unique_ptr<Pieces>& piece2 = square2.getPiece();
			piece1.swap(piece2);
			//std::cout << "Piece moved successfully." << std::endl;
		}
		else {
			std::cout << "Invalid move. Please try again." << std::endl;
		}

}


	



