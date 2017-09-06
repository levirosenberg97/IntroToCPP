#pragma once

struct Entity
{
	int hp;
	int atk;
	int def;
	int lvl;

	int heal;
	int exp;
	int money;
};

void printStats(Entity target);

void Enemies(Entity Player, Entity &Creature, int random, int level);

void fight(Entity &kobey, char mon[50], Entity enemy, bool &end, int &pot, char name[50]);

void Creature(Entity &player, char cstring[50], int &maxHp);

void levelUp(Entity &player, char mon[50], int &level, int &maxHp);
