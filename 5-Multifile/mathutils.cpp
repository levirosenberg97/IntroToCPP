#include "mathutils.h"
using namespace std;


int  min(int a, int b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int  max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int clamp(int lower, int upper, int value)
{
	if (value < lower)
	{
		return lower;
	}
	else if (value > upper)
	{
		return upper;
	}
	else
	{
		return value;
	}
}

float dist(float x1, float x2, float y1, float y2)
{
	return sqrtf(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
}