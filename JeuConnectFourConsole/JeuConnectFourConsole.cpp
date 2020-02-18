#include <iostream>
#include "ClassBoard.h"
using namespace std;
int main()
{
	Board board = Board();
	int player = playerX;
	int index;
	while (board.winner()==0)
	{
		board.print(cout);
		if (player == playerX)
		{
			cout << "Tour au joueur de X, Selectionner index entre 0 et 5" << endl;
			cin >> index;
			if(board.changeX(index))
				player = playerO;
		}
		else
		{
			cout << "Tour au joueur de O, Selectionner index entre 0 et 5" << endl;
			cin >> index;
			board.changeO(index);
			player = playerX;
		}
		
	}
	board.print(cout);
	cout << "Grande victoire oumpique du joueur " << board.winner();
	return 0;
}
