#pragma once
#include <iostream>
#include <string>
#define playerX 1
#define playerO 2
using namespace std;
class Player
{
public:
	Player(string n = "Player", int type = playerX);
	void increaseWin();
	void increaseLoss();
	int getPlayerType();
	string getName();
private:
	string nom;
	int win;
	int loss;
	int playerType;
};