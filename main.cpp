#include<iostream>
#include"World.h"
using namespace std;

int main()
{
	World* MyWorld = new World;

	MyWorld->StartGame();

	delete MyWorld;

	return 0;
}