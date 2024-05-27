#include "Monster.h"

#include <iostream>

using namespace std;

FMonster::FMonster()
{
	//cout << "FMonster Constructor" << endl;

	HP = 0;
	Gold = 0;
}

FMonster::~FMonster()
{
	//cout << "FMonster Destructor" << endl;
}

void FMonster::Move()
{
	cout << "Move()" << endl;
}

void FMonster::Attack()
{
}

void FMonster::Pickup()
{
}

int FMonster::GetGold()
{
	return Gold;
}

void FMonster::SetGold(int NewGold)
{
	Gold = NewGold;
}

void FMonster::Die()
{
}