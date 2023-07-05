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
	
};

