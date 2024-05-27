#include "Goblin.h"

#include <iostream>

using namespace std;

FGoblin::FGoblin()
{
	cout << "FGoblin Constructor" << endl;
}

FGoblin::~FGoblin()
{
	cout << "FGoblin Destructor" << endl;

}

void FGoblin::Move()
{
	cout << "Goblin Move!" << endl;
}


void FGoblin::Jump()
{
}