#include "Slime.h"
#include <iostream>
FSlime::FSlime()
{
	std::cout << "FSlime Constructor" << std::endl;
}

FSlime::~FSlime()
{
	std::cout << "FSlime Destructor" << std::endl;
}
void FSlime::Slide()
{
}

void FSlime::Move()
{
	std::cout << "Slime Move~!" << std::endl;
}
