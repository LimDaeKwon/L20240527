#include "Player.h"

void Player::Move()
{

}

void Player::Attack(Monster* MyMonster)
{
	MyMonster->HP -= Damage;
	if (MyMonster->HP <= 0)
	{
		MyMonster->Die();
		GetGold();
	}

}


void Player::GetGold()
{
	Gold += 10;
}
