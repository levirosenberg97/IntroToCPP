#include "vector2d.h"
#include<cmath>

vec2d sum(vec2d a, vec2d b)
{
	float xSum = a.x + b.x;
	float ySum = a.y + b.y;

	return{ xSum,ySum };
}

vec2d diff(vec2d a, vec2d b)
{
	float xDiff = a.x - b.x;
	float yDiff = a.y - b.y;

	return{ xDiff,yDiff };
}


float dist(vec2d a, vec2d b)
{
	return sqrtf(((b.x - a.x)*(b.x - a.x))+((b.y - a.y)*(b.y - a.y)));
}