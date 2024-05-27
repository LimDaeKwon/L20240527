#pragma once
#include "Monster.h"

class FWildboar : public FMonster
{
public:
	FWildboar();
	~FWildboar();
	void Run();
	void Move();
};