#pragma once
#include"Player.h"
#include"Slime.h"
#include"WildBoar.h"
#include"Goblin.h"

class World
{
public:
	Player MyPlayer;
	Slime MySlime;
	WildBoar MyWildBoar;
	Goblin MyGoblin;
	
public:
	void StartGame();

};

