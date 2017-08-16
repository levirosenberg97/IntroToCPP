#include "rng.h"
#include<random>

void seedRng(int seed)
{
	srand(seed);
}

int rng()
{
	return rand() % 100 + 1;
}

int rngRange(int min, int max)
{
	return rand() % max + min;
}

bool rngb()
{
	return rand() % 1;
}

bool rngBchance(int chance)
{
	int rando = rand() % 100 + 1;

	if (rando <= chance)
	{
		return true;
	}
	else
	{
		return false;
	}
}
