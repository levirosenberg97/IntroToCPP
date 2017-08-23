#pragma once

struct Entity
{
	int hp;
	int atk;
	int def;

	int heal;

};

void printStats(Entity target);

void fight(Entity kobey, Entity enemy);