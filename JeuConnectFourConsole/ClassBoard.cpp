#include "ClassBoard.h"

Board::Board(int l, int h)
{
	longueur = l;
	hauteur = h;
	player = playerX;
	board = new char*[hauteur];
	for (int i = 0; i < hauteur; i++)
	{
		board[i] = new char[longueur];
	}
	for (int i = 0; i < hauteur; i++)
	{
		for (int j = 0; j < longueur; j++)
		{
			board[i][j] = '*';
		}
	}
	print(cout);
}

bool Board::changeO(int x)
{
	if (x >= longueur)
	{
		cout << "Mauvais index!" << endl;
		return false;
	}
	for (int i = hauteur-1; i >= 0; --i)
	{
		if (board[i][x] == '*')
		{
			board[i][x] = 'O';
			return true;;
		}
	}
	cout << "Rangee pleine!" << endl;
	return false;
}
bool Board::changeX(int x)
{
	if (x >= longueur)
	{
		cout << "Mauvais index!" << endl;
		return false;
	}
	for (int i = hauteur-1; i >= 0; --i)
	{
		if (board[i][x] == '*')
		{
			board[i][x] = 'X';
			return true;
		}
	}
	cout << "rangee pleine!" << endl;
	return false;
}
void Board::increment()
{
	if (idx < longueur - 1)
	{
		idx++;
	}
}
void Board :: decrement()
{
	if (idx > 0)
	{
		idx--;
	}
}
void Board::drop()
{
	if (player == playerX)
	{
		if (changeX(idx))
			player = playerO;
	}
	else
	{
		if (changeO(idx))
			player = playerX;
	}
	
}
char Board::getChar(int player)
{
	if (playerO == player)
	{
		return 'O';
	}
	else if (playerX == player)
	{
		return 'X';
	}
	else if (gagnant == player)
	{
		return'w';
	}
	else
	{
		cout << "Matt, don't play with 3 players please." << endl;
		return NULL;
	}
}
int Board::winner()
{
	//Vérification de l'horizontale
	for (int i = 0; i < hauteur; i++)
	{
		for (int j = 0; j < longueur-3; j++)
		{
			if (board[i][j] == 'X' && board[i][j + 1] == 'X' && board[i][j + 2] == 'X' && board[i][j + 3] == 'X')
			{
				return playerX;
			}
			else if(board[i][j] == 'O' && board[i][j + 1] == 'O' && board[i][j + 2] == 'O' && board[i][j + 3] == 'O')
			{
				return playerO;
			}
		}
	}

   //Vérification du verticale
	for (int i = hauteur - 1; i >= 3; i--)
	{
		for (int j = 0; j < longueur; j++)
		{
			if (board[i][j] == 'X' && board[i - 1][j] == 'X' && board[i - 2][j] == 'X' && board[i - 3][j] == 'X')
			{
				return playerX;
			}
			if (board[i][j] == 'O' && board[i - 1][j] == 'O' && board[i - 2][j] == 'O' && board[i - 3][j] == 'O')
			{
				return playerO;
			}
		}
	}

	//Vérification diagonale Haut gauche a en bas droite
	for (int i = 0; i < hauteur-3; i++)
	{
		for (int j = 0; j < longueur-3; j++)
		{
			if (board[i][j] == 'X' && board[i + 1][j + 1] == 'X' && board[i + 2][j + 2] == 'X'&& board[i + 3][j + 3] == 'X')
			{
				return playerX;
			}
			if (board[i][j] == 'O' && board[i + 1][j + 1] == 'O' && board[i + 2][j + 2] == 'O' && board[i + 3][j + 3] == 'O')
			{
				return playerO;
			}
		}
	}

	//Verification diagonale haut droite a bas gauche
	for (int i = 0; i < hauteur - 3; i++)
	{
		for (int j = longueur - 1; j >= 3; j--)
		{
			if (board[i][j] == 'X' && board[i + 1][j - 1] == 'X' && board[i + 2][j - 2] == 'X'&& board[i + 3][j - 3] == 'X')
			{
				return playerX;
			}
			if (board[i][j] == 'O' && board[i + 1][j - 1] == 'O' && board[i + 2][j - 2] == 'O' && board[i + 3][j - 3] == 'O')
			{
				return playerO;
			}
		}
	}
	return personne;
}

void Board::print(ostream &s)
{
	s << " ";
	for (int i = 0; i < idx; i++)
	{
		s << "  ";
	}
	s << getChar(player);
	s << endl;
	
	s << " ";
	for (int j = 0; j < longueur-1; j++)
	{
		s << "--";
	}
	s << "-";
	s << endl;
	for (int i = 0; i < hauteur; i++)
	{
		for (int j = 0; j < longueur; j++)
		{
			s << " " << board[i][j] ;
		}
		s << endl;
	}
}


