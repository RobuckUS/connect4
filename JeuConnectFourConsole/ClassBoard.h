#pragma once
#include <iostream>
#define personne 0
#define playerX 1
#define playerO 2

using namespace std;
class Board
{
public:
	Board(int l = 6, int h=7);
	bool changeO(int x);
	bool changeX(int x);
	int winner();
	void print(ostream &os);
private:
	
	int longueur;
	int hauteur;
	char **board;
};
