#include "CPlayer.h"

Player::Player()
{
	X = 0;
	Y = 0;
}

Player::Player(int mX, int mY)
{
	X = mX;
	Y = mY;
}

Player::~Player()
{
	X = 0;
	Y = 0;
}

bool Player::up()
{
	return false;
}

bool Player::down()
{
	return false;
}

bool Player::left()
{
	return false;
}

bool Player::right()
{
	return false;
}

bool Player::Win()
{
	return false;
}

bool Player::Lose()
{
	return false;
}
