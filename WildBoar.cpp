#include "Wildboar.h"
#include <iostream>
FWildboar::FWildboar()
{
	std::cout << "FWildboar Constructor" << std::endl;
}

FWildboar::~FWildboar()
{
	std::cout << "FWildboar Destructor" << std::endl;
}

void FWildboar::Run()
{
}

void FWildboar::Move()
{
	std::cout << "FWildboar Move~!" << std::endl;
}
