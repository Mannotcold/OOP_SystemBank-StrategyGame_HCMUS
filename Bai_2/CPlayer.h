#pragma once
#include"CCongTrinh.h"
class Player
{
private:
	int X, Y;
public:
	Player();
	Player(int mX, int mY);
	~Player();
	bool up();//Xu ly tang toa do Y + 1
	bool down();//Xu ly tang toa do Y - 1
	bool left();//Xu ly tang toa do X + 1
	bool right();//Xu ly tang toa do X - 1
	bool Win();//Xu ly thang
	bool Lose();//Xu ly thua
};

