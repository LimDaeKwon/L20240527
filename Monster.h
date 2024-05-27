#pragma once
class FMonster
{
public:
	FMonster();
	~FMonster();

	void Move();
	void Attack();
	void Pickup();
	int GetGold();
	void SetGold(int NewGold);

protected:
	int HP;
	int Gold;

	void Die();
};