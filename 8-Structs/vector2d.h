#pragma once

struct vec2d
{
	float x;
	float y;
};

vec2d sum(vec2d a, vec2d b);
vec2d diff(vec2d a, vec2d b);
float dist(vec2d a, vec2d b);