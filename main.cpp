#include <iostream>
#include <vector>
#include "World.h"
#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "Wildboar.h"

using namespace std;

int main()
{
	//���� 3 ������ �迭�� ������ �ϴ��� �������� ������ ������.
	//�÷��̾�� �Ѹ���.
	srand(time(nullptr));
	int GoblinSize = (rand() % 3) + 1;
	int SlimeSize = (rand() % 3) + 1;
	int WildboarSize = (rand() % 3) + 1;


	FPlayer* Player = new FPlayer;
	FSlime* Slime = new FSlime[SlimeSize];
	FGoblin* Goblin = new FGoblin[GoblinSize];
	FWildboar* Wildboar = new FWildboar[WildboarSize];
	
	cout << GoblinSize << " " << SlimeSize << " " << WildboarSize << "  �� �� �� ����" << endl;

	for (int Index = 0; Index < GoblinSize; ++Index)
	{
		Goblin[Index].SetGold(100);
		Goblin[Index].Move();
		cout << Goblin[Index].GetGold() << endl;
	}

	for (int Index = 0; Index < SlimeSize; ++Index)
	{
		Slime[Index].Move();
	}
	
	for (int Index = 0; Index < WildboarSize; ++Index)
	{
		Wildboar[Index].Move();
	}


	delete[] Slime;
	delete[] Goblin;
	delete[] Wildboar;
	delete Player;




	/*vector<FGoblin*>Goblin;
	for (int Index = 0; Index < GoblinSize; ++Index)
	{
		Goblin.push_back(new FGoblin());
	}
	vector<FSlime*>Slime;
	for (int Index = 0; Index < SlimeSize; ++Index)
	{
		Slime.push_back(new FSlime());
	}
	vector<FWildboar*>Wildboar;
	for (int Index = 0; Index < WildboarSize; ++Index)
	{
		Wildboar.push_back(new FWildboar());
	}


	for (int Index = 0; Index < GoblinSize; ++Index)
	{
		Goblin[Index]->Move();
	}

	for (int Index = 0; Index < SlimeSize; ++Index)
	{
		Slime[Index]->Move();
	}

	for (int Index = 0; Index < WildboarSize; ++Index)
	{
		Wildboar[Index]->Move();
	}

	delete Player;

	for (int Index = 0; Index < GoblinSize; ++Index)
	{
		delete Goblin[Index];
	}
	for (int Index = 0; Index < SlimeSize; ++Index)
	{
		delete Slime[Index];
	}
	for (int Index = 0; Index < WildboarSize; ++Index)
	{
		delete Wildboar[Index];
	}*/



	return 0;
}