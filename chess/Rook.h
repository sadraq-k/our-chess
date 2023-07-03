#pragma once
#include "pieces.h"
using namespace std;

class rook : public pieces
{	private:
	char Current_X_Coordinate[2] = {'a' , 'h'};
	int  Current_Y_Coordinate[2] = {1 , 1};
	


	public:
		void movement(int WhichRook = 1  , char x = 'a' ,   int y = 1  ){
		cout<<"Please enter desired rook:";
		cin>>WhichRook;	
		cout<<"Please enter the destination coordinates of Rook ('char , int')"<<endl;
		cin>>x;
		cin>>y;
		if(WhichRook == 1 && Availability[4] == true)
		{
			Current_X_Coordinate[0] = x;
			Current_Y_Coordinate[0] = y;	
		}
		if(WhichRook == 2 && Availability[7] == true)
		{
			Current_X_Coordinate[1] = x;
			Current_Y_Coordinate[1] = y;
		}
		else{
		cout<<"ERROR: Your desired rook was not found \n Please enter again "<<endl;
		movement();
		}
		


}



	//void movement(){}

	
};