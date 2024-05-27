#pragma once
#include "Monster.h"

class FSlime : public FMonster
{
public:
	FSlime();
	~FSlime();
	void Slide();
	void Move();
};