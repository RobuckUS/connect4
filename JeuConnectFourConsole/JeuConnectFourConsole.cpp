#include <iostream>
#include <conio.h>
#include "ClassBoard.h"
using namespace std;
int main()
{
	Board board = Board();
	char input;
	while (board.winner().getName()._Equal("null"))
	{
		input = _getch();
		if (input == 'a')
		{
			board.decrement();
		}
		else if (input == 'd' )

		{
			board.increment();
		}
		else if (input == 's' )
		{
			board.drop();
		}
		system("cls");
		board.print(cout);
	}
	system("cls");
	

	cout << "Le gagnant est: " << board.winner().getName();
	return 0;
}