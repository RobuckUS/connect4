#include "Player.h"
Player::Player(string n, int type)
{
	nom = n;
	win = 0;
	loss = 0;
	playerType = type;
}

void Player::increaseWin()
{
	win++;
}

void Player::increaseLoss()
{
	loss++;
}

int Player::getPlayerType()
{
	return playerType;
}

string Player::getName()
{
	return nom;
}
