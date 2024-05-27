#pragma once

#include "Monster.h"

//금형
// 
//협업한다.
//휴먼에러를 줄인다.
//encapsulation
class FGoblin : public FMonster
{
public:
	FGoblin();
	~FGoblin();
	void Move();
	void Jump();
};