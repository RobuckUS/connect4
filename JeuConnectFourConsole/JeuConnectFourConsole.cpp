#include <iostream>
#include <conio.h>
#include "ClassBoard.h"
using namespace std;
int main()
{
<<<<<<< HEAD
	
}
=======
	Board board = Board();
	char input;
	while (board.winner() == personne)
	{
		input = _getch();
		if (input == 'a')
		{
			board.decrement();
		}
		else if (input == 'd')

		{
			board.increment();
		}
		else if (input == 's')
		{
			board.drop();
		}
		system("cls");
		board.print(cout);
	}
	system("cls");
	board.print(cout);
	cout << "Grande victoire oumpique du joueur " << board.getChar(board.winner());
	return 0;
}
>>>>>>> Avancement_Thierry
