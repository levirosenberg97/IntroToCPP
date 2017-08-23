#pragma once

struct Entity
{
	float HP;
	float atk;
	float def;
};

void battle(Entity enemyA, Entity enemyB);