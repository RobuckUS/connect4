#include <iostream>
#include "ClassBoard.h"
using namespace std;
int main()
{
	Board board = Board();
	for (int i = 0; i < 3; i++)
	{
		board.changeO(0);
	}
	board.changeX(0);
	for (int i = 0; i < 2; i++)
	{
		board.changeO(1);
	}
	board.changeX(1);
	board.changeO(2);
	board.changeX(2);
	board.changeX(3);
	board.print(cout);
	cout << board.winner();
}
