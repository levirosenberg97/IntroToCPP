#include "battle.h"

#include<iostream>
using namespace std;


void printEntity(Entity target)
{
	cout << target.HP << endl;
	cout << target.atk << endl;
	cout << target.def << endl;

}

void battle(Entity enemyA, Entity enemyB)
{
	bool inProgress = true;

	while (inProgress)
	{
		cout << "Player Stats" << endl;
		printEntity(enemyA);

		cout << "Zombie Stats" << endl;
		printEntity(enemyB);


		enemyA.HP -= enemyB.atk - enemyA.def;
		enemyB.HP -= enemyA.atk - enemyB.def;

		inProgress = enemyA.HP > 0 && enemyB.HP > 0;

	}

	cout << "The Battle is Over" << endl;

	if (enemyA.HP > 0)
	{
		cout << "Player Wins" << endl;
	}
	else if (enemyB.HP > 0)
	{
		cout << "You Lose" << endl;
	}
	else
	{
		cout << "Everyone Loses" << endl;
	}
}