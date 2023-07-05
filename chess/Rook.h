#pragma once
#include "pieces.h"
using namespace std;

class rook : public pieces
{	private:
    int WhichRook =0;
    SQUARECOORDINATE Temp;
	SQUARECOORDINATE Rook_Position[2] = {a,r1 , h,r1};
	SQUARECOORDINATE Rook_Destination[2] = {a,r1 , h,r1};

	public:

		bool checkMovement(){
			bool check = true; 
			if(Rook_Position[WhichRook].X != Temp.X  &&  Rook_Position[WhichRook].Y != Temp.Y ){
				check = false;
				cout<<"ERROR:The movement of the piece is invalid."<<endl;
			}
            else 
                check = true;
        return check;
		}
	
		bool isPiecesBetween(const SQUARECOORDINATE& RookPositon , const SQUARECOORDINATE& RookDestination){
			bool check;
			if(RookPositon.X == RookDestination.X){
                //It moves on the Y axis
				int start = min(RookPositon.X , RookDestination.X)+1;
				int end = max(RookPositon.X , RookDestination.X )-1;
				for(int i = start ; i<=end ; i++)
                {
					if( !(boardChess[RookPositon.X][i].X == emptysquarex && boardChess[RookPositon.X][i].Y == emptysquarey) )
                        check = false;
				} 
			}
			else if (RookPositon.Y == RookDestination.Y){
                //It moves on the X axis
				int start = min(RookPositon.Y , RookDestination.Y)+1;
				int end = max(RookPositon.Y , RookDestination.Y )-1;
                for (int  i = 0; i <= end; i++)
                {
                    if( !(boardChess[i][RookPositon.Y].X == emptysquarex && boardChess[i][RookPositon.Y].Y == emptysquarey) )
                        check = false;
                }
                
			}
			else{
				check = true;
			}
            return check;
		}


		void movement(HORIZONTAL x = emptysquarex , VERTICAL y = emptysquarey ){
		bool check;
		cout<<"Please enter desired rook:";
		cin>>WhichRook;	
		cout<<"Please enter the destination coordinates of Rook ('char , int')"<<endl;
		cin>>x;
		cin>>y;
        Temp = {x,y};

        //This checks if the piece selected by the user is still available in the game
		if(WhichRook == 1 && Availability[4] == true)
		{
            //It checks if the piece jump is correct and if it is possible for the piece to go to the destination specified by the task (is there a piece in the way or not)
            if(checkMovement() && isPiecesBetween(Rook_Position[0] , Temp))
                Rook_Destination[0] = {x , y};
			else{
                cout<<"ERROR: It is not possible to place this Piece in the place you entered  \nPlease enter again "<<endl;
                movement();
            }  	
		}

        //This checks if the piece selected by the user is still available in the game
		if(WhichRook == 2 && Availability[7] == true)
		{   
            //It checks if the piece jump is correct and if it is possible for the piece to go to the destination specified by the task (is there a piece in the way or not)
            if(checkMovement() && isPiecesBetween(Rook_Position[1] , Temp))
			    Rook_Destination[1] = {x , y};
            else{
                cout<<"ERROR: It is not possible to place this Piece in the place you entered  \nPlease enter again "<<endl;
                movement();
            }    
		}
		else{
		cout<<"ERROR: Your desired rook was not found \nPlease enter again "<<endl;
		movement();
		}
		


}



	//void movement(){}

	
};



/*
bool isPieceBetween(Square currentPosition, Square destination) {
    // بررسی مسیر عمودی بین دو موقعیت
    if (currentPosition.file == destination.file) {
        int startRank = std::min(currentPosition.rank, destination.rank) + 1;
        int endRank = std::max(currentPosition.rank, destination.rank) - 1;

        for (int rank = startRank; rank <= endRank; ++rank) {
            // اینجا باید بررسی کنید که آیا قطعه‌ای در موقعیت (currentPosition.file, rank) وجود دارد یا خیر
            // اگر قطعه‌ای وجود داشت، باید false را برگردانید
        }
    }
    // بررسی مسیر افقی بین دو موقعیت
    else if (currentPosition.rank == destination.rank) {
        int startFile = std::min(currentPosition.file, destination.file) + 1;
        int endFile = std::max(currentPosition.file, destination.file) - 1;

        for (int file = startFile; file <= endFile; ++file) {
            // اینجا باید بررسی کنید که آیا قطعه‌ای در موقعیت (file, currentPosition.rank) وجود دارد یا خیر
            // اگر قطعه‌ای وجود داشت، باید false را برگردانید
        }
    }

    // اگر تابع تا اینجا رسیده، یعنی هیچ قطعه‌ای در مسیر بین دو موقعیت وجود ندارد
    return true;
}

/**
#include <iostream>

enum File { A, B, C, D, E, F, G, H };
enum Rank { R1, R2, R3, R4, R5, R6, R7, R8 };

struct Square {
    File file;
    Rank rank;
};

int main() {
    Square rookPosition = { E, R4 };
    Square destination = { E, R6 };

    // Condition 1: Check if the rook's destination is on the same horizontal or vertical axis
    if (rookPosition.file != destination.file && rookPosition.rank != destination.rank) {
        std::cout << "Invalid rook movement. The destination should be on the same horizontal or vertical axis.n";
        return 0;
    }

    // Condition 2: Check if there is any piece between the rook's current position and its destination
    // (Assuming the chessboard is represented by a 2D array of pieces)
    if (isPieceBetween(rookPosition, destination)) {
         std::cout << "Invalid rook movement. There is a piece blocking the path.n";
        return 0;
     }

    // Condition 3: Check if there are any enemy pieces surrounding the rook
    // (Assuming the chessboard is represented by a 2D array of pieces)
    // if (isEnemyPiecesAround(rookPosition)) {
    //     std::cout << "Valid rook movement. The rook can capture a piece.n";
    // } else {
    //     std::cout << "Invalid rook movement. There are no enemy pieces around.n";
    // }

    std::cout << "Valid rook movement.n";
    return 0;
}





/**
#include <iostream>

enum File { A, B, C, D, E, F, G, H };
enum Rank { R1, R2, R3, R4, R5, R6, R7, R8 };

struct Square {
    File file;
    Rank rank;
};

int main() {
    Square rookPosition = { D, R4 };
    Square destination = { G, R4 };

    // تست شرایط
    if (rookPosition.file != destination.file && rookPosition.rank != destination.rank) {
        std::cout << "خطا: مقصد و روک نمی توانند در یک خط عمودی یا افقی قرار بگیرند." << std::endl;
    } else if (rookPosition.file != destination.file || rookPosition.rank != destination.rank) {
        std::cout << "خطا: در مسیر روک به مقصد، قرار دارد." << std::endl;
    } else {
        std::cout << "حرکت معتبر است. روک می تواند یک مهره را تسخیر کند." << std::endl;
    }

    return 0;
}


/*
bool isValidRookMove(int currentX, int currentY, int destinationX, int destinationY) {
    // Check if the move is in either horizontal or vertical direction
    if (currentX != destinationX && currentY != destinationY) {
        return false;
    }

    int deltaX = (destinationX > currentX) ? 1 : -1;
    int deltaY = (destinationY > currentY) ? 1 : -1;

    // Check if there is any piece in the path until the destination
    for (int x = currentX + deltaX, y = currentY + deltaY; x != destinationX || y != destinationY; x += deltaX, y += deltaY) {
        // Check if there is a piece at (x, y)
        // If there is, the move is invalid
        if (board[x][y] != nullptr) {
            return false;
        }
    }

    // Check if there is a piece at the destination
    // If there is, it must have a different color so that the rook can capture it
    if (board[destinationX][destinationY] != nullptr && board[destinationX][destinationY]->getColor() == currentPiece->getColor()) {
        return false;
    }

    return true;
}*/