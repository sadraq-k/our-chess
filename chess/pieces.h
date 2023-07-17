#pragma once
#include <iostream>

using namespace std;

string pieceModel[6] = {
	/*shah*/	"King",
	/*Vazir*/	"Queen",
	/*Fil*/		"Bishop",
	/*Asb*/		"Knight",
	/*Rokh*/	"Rook",
	/*Sarbaz*/	"Pawn"
};



class pieces
{
	friend int convertPiecesColorToInt(pieces& temp);
private:

	string pieceRank;
	static int whitePiecesCounter;
	static int blackPiecesCounter;
protected:
	string pieceColor; //0 is black , 1 is white
	
	bool Availability[16]  = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};//Other than 0, the rest in Boolean is considered 1 or true
							/*										  //All the pieces are there
							pawn = 8,9,10,11,12,13,14,15
							king = 0
							queen = 1
							bishop = 2,5
							knight = 3,6
							rook = 4,7
							*/	


public:
	pieces(int Cmodel = 5, bool Ccolor = 0)
	{
		if (Cmodel < 0 || Cmodel > 6)
			cerr << "ERROR: PIECES MODEL NOT FOUND\n";
		else
		{
			pieceRank = pieceModel[Cmodel];
			if (Ccolor == 0)
			{
				pieceColor = "Black";
				blackPiecesCounter++;
			}
			else if (Ccolor == 1)
			{
				pieceColor = "White";
				whitePiecesCounter++;
			}

			if (blackPiecesCounter > 16 || whitePiecesCounter > 16)// Must have 16 pieces Black or White
			{
				cerr << "ERROR: THE " << this->pieceColor << " PIECE IS OVERBUILT";
				this->~pieces();
			}
		}
	}
	~pieces()
	{
		if (this->pieceColor == "Black")
			blackPiecesCounter--;
		else if (this->pieceColor == "White")
			whitePiecesCounter--;
	}
	void showInfo()//This function only for test
	{
		if (pieceColor == "" || pieceRank == "")
			cerr << "ERROR: INFO NOT ENOUGH\n";
		else
			cout << "Model : " << pieceRank << " / Team : " << pieceColor << endl;
	}

	virtual void movments() = 0;

};
int pieces::whitePiecesCounter = 0;
int pieces::blackPiecesCounter = 0;

int convertPiecesColorToInt(pieces& temp){
	int color;
	if(temp.pieceColor == "Black")
		color = 1;
	if(temp.pieceColor == "White")
		color = 0;	
	return color;
}


//The horizontal component of the chessboard
enum HORIZONTAL{
a,b,c,d,e,f,g,h , emptysquarex , filledsquarex
};
//The vertical component of the chessboard
enum VERTICAL{
r1,r2,r3,r4,r5,r6,r7,r8 , emptysquarey , filledsquarey
};
enum COLOR{
	white,black,none
};
//The coordinates of the squares on the chess board
struct SQUARECOORDINATE{
	HORIZONTAL X;
	VERTICAL Y;
	COLOR colorofpiece;

};


istream& operator>>(istream& in , HORIZONTAL& x){
	int input{};
	in>>input;
	x = static_cast<HORIZONTAL>(input);
}

istream& operator>>(istream& in , VERTICAL& y){
	int input{};
	in>>input;
	y = static_cast<VERTICAL>(input);
}

istream& operator>>(istream& in , COLOR& colorpices){
	int input{};
	in>>input;
	colorpices = static_cast<COLOR>(input);
}

SQUARECOORDINATE boardChess[8][8];


void emptysquareboardAndAvailalbility(){

for (int i = 2; i < 8; i++)
{
	for (int j  = 0; j < 8; j++)
	{
		boardChess[i][j].X = emptysquarex;
		boardChess[i][j].Y = emptysquarey;
		boardChess[i][j].colorofpiece = none;
	}
}

}	
	
