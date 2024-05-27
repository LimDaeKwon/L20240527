#include "Player.h"
#include<iostream>
FPlayer::FPlayer() : HP(0), Gold(0)
{
	std::cout << "FPlayer Constructor" << std::endl;
	//HP = 0;
	//Gold = 0;
}

FPlayer::~FPlayer()
{
	std::cout << "FPlayer Destructor" << std::endl;
}

void FPlayer::Move()
{
	HP = 0;
}

void FPlayer::Die()
{
}

void FPlayer::Attack()
{
}

void FPlayer::Pickup()
{
}

int FPlayer::GetGold()
{
	return Gold;
}

void FPlayer::SetGold(int NewGold)
{
	if (NewGold >= 0)
	{
		Gold = NewGold;
	}
}