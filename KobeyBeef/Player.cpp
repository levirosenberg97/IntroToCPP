#include "Player.h"
#include <iostream>
#include<random>
using namespace std;

void printStats(Entity target)
{
	cout << "Health: " << target.hp << endl;
	cout << "Attack:" << target.atk << endl;
	cout << "Defense: " << target.def << "\n" << endl;
}


void fight(Entity kobey,Entity enemy)
{
	int input = 0;
	int enemyMax = enemy.hp;
	int playerMax = kobey.hp;

	//player action
	while (input == 0)
	{
		int dmg = 0;
		cout << "________________________________________________" << endl;
		cout << "'1' to Attack '2' to Eat and Heal: ";
		cin >> input;
		cout << " \n";

		if (input == 1)
		{
			dmg = kobey.atk - enemy.def;
			if (dmg <= 0)
			{
				cout << "Nothing Happened\n" << endl;
			}
			else if(dmg >= 25)
			{
				dmg = 30;
				enemy.hp = enemy.hp - dmg;
				cout << "Critical Hit| Enemy has " << enemy.hp << " HP Remaining\n" << endl;	
			}
			else
			{
				enemy.hp = enemy.hp - dmg;
				cout << "Attacked| Enemy has " << enemy.hp << "HP Remaining\n" << endl;
			}
		}
		else if (input == 2)
		{
			if (kobey.hp < playerMax)
			{
				kobey.hp = kobey.hp + kobey.heal;
				if (kobey.hp > playerMax)
				{
					kobey.hp = playerMax;
				}
				cout << "Player Ate to Heal his Wounds| " << kobey.hp << " HP Remaining \n" << endl;
			}
			else
			{
				cout << "Nothing Happened\n" << endl;
			}
		}
		else
		{
			input = 0;
		}

		if (enemy.hp <= 0)
		{
			cout << "You Win" << endl;
			break;
		}

		//enemy action
		while (input == 1 || input == 2)
		{
				int ea = rand() % 2 + 1;

				if (ea == 2)
				{
					if (enemy.hp < enemyMax)
					{
						enemy.hp = enemy.hp + enemy.heal;
						if (enemy.hp > enemyMax)
						{
							enemy.hp = enemyMax;
						}
						cout << "Enemy Stole Some Food and Now has " << enemy.hp << " HP\n" << endl;
					}
					else
					{
						cout << "Enemy Attempted to Steal some Food but Failed\n" << endl;
					}
				}
				else
				{
					dmg = enemy.atk - kobey.def;
					if (dmg <= 0)
					{
						cout << "Nothing Happened\n" << endl;
					}
					else if (dmg >= 20)
					{
						dmg = 30;
						kobey.hp = kobey.hp - dmg;
						cout << "Critical Hit| Kobey has " << kobey.hp << " HP Remaining\n" << endl;
					}
					else
					{
						kobey.hp = kobey.hp - dmg;
						cout << "Enemy Attacked| Kobey has " << kobey.hp << " HP Remaining\n" << endl;
					}
				}
			input = 0;
		}

		
		if (kobey.hp <= 0)
		{
			cout << "You Lose" << endl;
			break;
		}

	}
}
