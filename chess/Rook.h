#pragma once
#include "pieces.h"
using namespace std;

class rook : public pieces
{	private:
    int WhichRook =0;
    SQUARECOORDINATE Temp;//It is used to store uncertain coordinates
	SQUARECOORDINATE Rook_Position[2] = {a,r1,none , h,r1,none};
	SQUARECOORDINATE Rook_Destination[2] = {a,r1,none , h,r1,none};


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
	
		bool isPiecesBetween(const SQUARECOORDINATE& RookPositon , const SQUARECOORDINATE& RookDestination ){
			bool check;
			if(RookPositon.X == RookDestination.X){
                //It moves on the Y axis
				int start = min(RookPositon.Y , RookDestination.Y)+1;
				int end = max(RookPositon.Y , RookDestination.Y )-1;
				for(int i = start ; i<=end ; i++)
                {
					if( !(static_cast<int>(boardChess[static_cast<int>(RookPositon.X)][i].X ) == 8 && static_cast<int>(boardChess[static_cast<int>(RookPositon.X)][i].Y) == 8) )
                        check = false;
						
						break;
				}
			}
			else if (RookPositon.Y == RookDestination.Y){
                //It moves on the X axis
				int start = min(RookPositon.X , RookDestination.X)+1;
				int end = max(RookPositon.X , RookDestination.X )-1;
                for (int  i = 0; i <= end; i++)
                {
                    if( !(static_cast<int>(boardChess[i][static_cast<int>(RookPositon.Y)].X) == 8 && static_cast<int>(boardChess[i][static_cast<int>(RookPositon.Y)].Y) == 8) )
                        check = false;
						break;
                }
                
			}
			else{
				check = true;
			}
            return check;
		}


		void movement(HORIZONTAL x = emptysquarex , VERTICAL y = emptysquarey , COLOR colorpiece = none){
		bool check;
		cout<<"Please enter desired rook:";
		cin>>WhichRook;	
		cout<<"Please enter the destination coordinates of Rook ('char , int')"<<endl;
		cin>>x;
		cin>>y;
		//Just so that the color of the piece is specified (this type of implementation is not definitive or even good at all)
		//It is not good to get the color of the piece in the class of each piece, and the color of the piece should be determined based on the turn of each person's move (inside the game board or a function in the base class).
        cout<<"Please enter the color of the piece"<<endl;
		cin>>colorpiece;
		Temp = {x,y,colorpiece};

        //This checks if the piece selected by the user is still available in the game
		if(WhichRook == 1 && Availability[4] == true)
		{
            //It checks if the piece jump is correct and if it is possible for the piece to go to the destination specified by the task (is there a piece in the way or not)
            if(checkMovement() &&  isPiecesBetween(Rook_Position[0],Temp)){
                Rook_Destination[0] = {x , y , colorpiece};
				boardChess[static_cast<int>(Rook_Destination[0].X)][static_cast<int>(Rook_Destination[0].Y)] ={x,y,colorpiece};
				Rook_Position[0] = Rook_Destination[0];
			}
			else{
                cout<<"ERROR: It is not possible to place this Piece in the place you entered  \nPlease enter again "<<endl;
                movement();
            }  	
		}

        //This checks if the piece selected by the user is still available in the game
		if(WhichRook == 2 && Availability[7] == true)
		{   
            //It checks if the piece jump is correct and if it is possible for the piece to go to the destination specified by the task (is there a piece in the way or not)
            if(checkMovement() &&  isPiecesBetween(Rook_Position[1],Temp)){
			    Rook_Destination[1] = {x , y , colorpiece};
				boardChess[static_cast<int>(Rook_Destination[1].X)][static_cast<int>(Rook_Destination[1].Y)] ={x,y,colorpiece};
				Rook_Position[1] = Rook_Destination[1];
			}
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

