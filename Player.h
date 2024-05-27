#pragma once
#include "Monster.h"
class Player
{
public:
	int HP;
	int Gold;
	int Damage;

public:
	void Move();
	void Attack(Monster *MyMonster);
	void GetGold();
};

