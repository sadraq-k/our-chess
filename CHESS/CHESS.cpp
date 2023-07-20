
#include"Board.h"


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
		mybored.ChangeScope(loc, where);
		mybored.PrintBoard();
	}
	return 0;
}


