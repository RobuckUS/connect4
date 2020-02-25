#pragma once
#include <iostream>
#include <vector>
#include "Player.h"
#define personne 0
#define gagnant 12
#define playerX 1
#define playerO 2

using namespace std;
class Board
{
public:
	Board(int l = 7, int h=6);
	bool changeO(int x);
	bool changeX(int x);
	void increment();
	void decrement();
	void drop();
	char getChar(int player);
	Player winner();
	void print(ostream &os);
	
private:
	int longueur;
	int hauteur;
	int idx;
	char **board;
	Player currentPlayer;
	vector<Player> v;
	Player nullP = Player("null");
};
