#include "Battle.h"
#include <iostream>
#include <random>
#include "Area.h"
#include <stdlib.h>



using namespace std;

void printStats(Entity target)
{
	delayText(10, "\nLevel: ");
	cout << target.lvl << endl;
	delayText(10, "Health: ");
	cout <<  target.hp << endl;
	delayText(10, "Attack: ");
	cout << target.atk << endl;
	delayText(10, "Defense: ");
	cout << target.def << "\n" << endl;
}

void Enemies(Entity Player, Entity &Creature, int random, int level)
{
	if (random == 1)
	{
		Entity bidoof{};
		bidoof.lvl = rand() % Player.lvl + 1;
		bidoof.hp = (rand() % 30 + 12) * bidoof.lvl;

	
		do
		{
			bidoof.atk = (rand() % Player.def + 14) * bidoof.lvl;
		} while (bidoof.atk <= Player.def);
		
		if (Player.atk == 0)
		{
			bidoof.def = 0;
		}
		else
		{
			do
			{
				bidoof.def = rand() % ((80 + 1) * bidoof.lvl);
			} while (bidoof.def >= (Player.atk - 5) + 1);
		}
		Creature = bidoof;
		colorPicker(12);
		delayText(10, "Bidoop\n");
		colorPicker(7);
		printStats(bidoof);
	}
	else if (random == 2)
	{
		Entity ratata{};
		ratata.lvl = rand() % Player.lvl + 1;
		ratata.hp = (rand() % 30 + 15) * ratata.lvl;
		do
		{
			ratata.atk = (rand() % Player.def + 13) * ratata.lvl;
		} while (ratata.atk <= Player.def);
		if (Player.atk == 0)
		{
			ratata.def = 50;
		}
		else
		{
			do
			{
				ratata.def = rand() % ((80 + 1) * ratata.lvl);
			} while (ratata.def >= (Player.atk - 5) + 1);
		}
		
		
		Creature = ratata;
		colorPicker(12);
		delayText(10, "Ratmon\n");
		colorPicker(7);
		printStats(ratata);
	}
	else if (random == 3)
	{
		Entity pidgey{};
		pidgey.lvl = rand() % level + 1;
		pidgey.hp = (rand() % 30 + 10) * pidgey.lvl;

	
		do
		{
			pidgey.atk = (rand() % Player.def + 10) * pidgey.lvl;
		} while (pidgey.atk <= Player.def);

		
		if (Player.atk == 0)
		{
			pidgey.def = 0;
		}
		else 
		{
			do
			{
				pidgey.def = rand() % ((80 + 1) * pidgey.lvl);
			} while (pidgey.def >= (Player.atk - 5) + 1);
		}
		Creature = pidgey;
		colorPicker(12);
		delayText(10, "Pigon\n");
		colorPicker(7);
		printStats(pidgey);	
	}
}

void Creature(Entity &player, char cstring[50], int &maxHp)
{
	int  points = 80;
	player.atk = 0;
	player.def = 0;
	player.hp = 0;
	player.lvl = 1;
	int input = 0;
	char yn = 0;
	


	delayText(15, "Name Your Monster: ");
	cin.getline(cstring, 50);
	cin >> cstring;
	
	while (points > 0)
	{
		while (points > 0)
		{
			delayText(15, "\nYou Have ");
			cout << points;
			delayText(15, " Points Remaining\n\n");

			if (points == 0)
			{
				break;
			}

			delayText(15, "Enter your HP: ");
			cin >> input;
			if (input > points)
			{
				input = 0;
				delayText(15, "We'll Comeback to That\n");
			}
			points = points - input;
			player.hp = player.hp + input;
			maxHp = player.hp;

			delayText(15, "\nYou Have ");
			cout << points;
			delayText(15, " Points Remaining\n\n");

			if (points == 0)
			{
				break;
			}

			cout << "Enter your ATK: ";
			cin >> input;
			if (input > points)
			{
				input = 0;
				delayText(15, "We'll Comeback to That\n");
			}
			points = points - input;
			player.atk = player.atk + input;

			delayText(15, "\nYou Have ");
			cout << points;
			delayText(15, " Points Remaining\n\n");

			if (points == 0)
			{
				break;
			}

			cout << "enter your DEF: ";
			cin >> input;
			if (input > points)
			{
				input = 0;
				delayText(15, "We'll Comeback to That\n");
			}
			points = points - input;
			player.def = player.def + input;

			if (points == 0)
			{
				break;
			}

		}
		delayText(15, "\n\n\nIs this Alright? || 'y' for YES 'n' for NO\n\n\n");
		delayText(10, cstring);
		printStats(player);

		while (yn == 0)
		{
			cin >> yn;
			if (yn == 'y')
			{
				break;
			}
			else if (yn == 'n')
			{
				points = 80;
				yn = 0;
				player.atk = 0;
				player.def = 0;
				player.hp = 0;
				break;
			}
			else
			{
				yn = 0;
			}
		}
	}
}

void fight(Entity &kobey, char mon[50], Entity enemy, bool &end,int &pot,char name[50])
{
	char input = 0;
	int enemyMax = enemy.hp;
	int playerMax = kobey.hp;

	//player action
	while (input == 0)
	{
		colorPicker(15);
		int dmg = 0;
		delayText(15, "'1' to Attack |'2' to use a Potion: ");
		cout << pot;
		delayText(15, " Remaining\n");
		cout << "________________________________________________" << endl;
		cin >> input;
		cout << " \n";

		if (input == '1')
		{
			dmg = (rand()%kobey.atk+4) - enemy.def;
			if (dmg <= 3)
			{
				colorPicker(12);
				enemy.hp = enemy.hp - 3;
				delayText(15, "Not Very Effective | ");
				cout << enemy.hp;
				delayText(15, " HP Remaining\n\n");
			}
			else if (dmg >= 25)
			{
				dmg = 30;
				enemy.hp = enemy.hp - dmg;
				if (enemy.hp < 0)
				{
					enemy.hp = 0;
				}
				colorPicker(12);
				delayText(15, "Critical Hit| Enemy has ");
				cout << enemy.hp;
				delayText(15, " HP Remaining\n\n");
			}
			else
			{
				enemy.hp = enemy.hp - dmg;
				if (enemy.hp < 0)
				{
					enemy.hp = 0;
				}
				delayText(15, "Attacked| Enemy has ");
				cout << enemy.hp;
				delayText(15, "HP Remaining\n\n");
				
			}
		}
		else if (input == '2')
		{
			if (kobey.hp < playerMax && pot > 0)
			{
				kobey.heal = rand() % (kobey.hp) + 3;
				kobey.hp = kobey.hp + kobey.heal;
				if (kobey.hp > playerMax)
				{
					kobey.hp = playerMax;
				}
				delayText(15, name);
				delayText(15, " Used a Potion on ");
				delayText(15, mon);
				cout << " | ";
				cout << kobey.hp;
				delayText(15, " HP Remaining \n\n");
				pot--;
			}
			else if (pot <= 0)
			{
				colorPicker(12);
				delayText(15, "Out of Potions\n\n");
			}
			else if (kobey.hp == playerMax)
			{
				colorPicker(12);
				delayText(15, "Already at Max HP. What a Waste\n\n");
				pot--;
			}
		}
		else
		{
			input = 0;
		}

		if (enemy.hp <= 0)
		{
			int xp = 0;
			int gain = 0;
			gain = (rand() % 40 + 15) * kobey.lvl;
			kobey.money += gain;
			delayText(15, "You Win\n\n");
			xp = kobey.exp + rand() % 30 + 3;
			kobey.exp += (xp * kobey.lvl);

			colorPicker(5);
			delayText(15, mon);
			delayText(15, " Gained ");
			cout << xp;
			delayText(15, " EXP\n");

			delayText(15, mon);
			delayText(15, " Has ");
			cout << kobey.exp;
			delayText(15, " Total EXP\n");
			colorPicker(6);
			delayText(15, "You Gained ");
			cout << gain;
			delayText(15, " DollaryDoos\n");
			break;
		}

		//enemy action
		while (input == '1' || input == '2')
		{
			int ea = rand() % 2 + 1;

			if (ea == 2)
			{
				if (enemy.hp < enemyMax && pot > 0)
				{
					enemy.heal = rand() % (enemy.hp - 10) + 3;
					enemy.hp = enemy.hp + enemy.heal;
					if (enemy.hp > enemyMax)
					{
						enemy.hp = enemyMax;
					}
					delayText(15, "Enemy Stole a Potion and Now has ");
					cout << enemy.hp;
					delayText(15, " HP\n\n");
					pot--;
				}
				else if(pot == 0 || enemy.hp == enemyMax)
				{
					delayText(15, "Enemy Attempted to Steal a Potion but Failed\n\n");
				}
			}
			else
			{
				dmg = (rand() % enemy.atk + 1) - kobey.def;
				if (dmg <= 3)
				{
					kobey.hp = kobey.hp - 3;
					delayText(15, "Not Very Effective | ");
					cout << kobey.hp;
					delayText(15, " HP Remaining\n\n");
				}
				else if (dmg >= 20)
				{
					dmg = 30;
					kobey.hp = kobey.hp - dmg;
					if (kobey.hp < 0)
					{
						kobey.hp = 0;
					}
					delayText(15, "Critical Hit| ");
					delayText(15, mon);
					delayText(15, " has ");
					cout << kobey.hp;
					delayText(15, " HP Remaining\n\n");
				}
				else
				{
					kobey.hp = kobey.hp - dmg;
					if (kobey.hp < 0)
					{
						kobey.hp = 0;
					}
					delayText(15, "Enemy Attacked| ");
					delayText(15, mon); 
					delayText(15, " has ");
					cout << kobey.hp;
					delayText(15, " HP Remaining\n\n");
				}
			}
			input = 0;
		}


		if (kobey.hp <= 0)
		{
			colorPicker(199);
			int loss = 0;
			delayText(15, "You Lose");
			loss = rand() % 60 + 1;
			kobey.money -= loss;
			if (kobey.money <= 0)
			{
				delayText(15, "Game Over");
				timedPause(1000);
				exit(0);
			}
			delayText(15, "You Lost ");
			cout << loss;
			delayText(15, " DollaryDoos/n");
			kobey.hp = playerMax;
			end = false;
			break;
		}

	}
}

void levelUp(Entity &player, char mon[50], int &level, int &maxHp)
{
	if (player.exp >= (90 * player.lvl))
	{
		colorPicker(232);
		delayText(15, "LEVEL UP!!!!!\n");
		int increase = 0;
		player.lvl++;
		delayText(15, mon);
		delayText(15, "\nLevel: ");
		cout << player.lvl << endl;

		increase = rand() % 20 + 10;
		player.hp = maxHp;
		delayText(15, "Health: ");
		cout << player.hp;
		delayText(15, " + ");
		cout << increase << endl;
		player.hp += increase;
		maxHp = player.hp;

		increase = rand() % 20 + 10;
		delayText(15, "Attack: ");
		cout << player.atk;
		delayText(15, " + ");
		cout << increase << endl;
		player.atk += increase;

		increase = rand() % 20 + 10;
		delayText(15, "Defense: ");
		cout << player.def;
		delayText(15, " + ");
		cout << increase << endl;
		player.def += increase;

		player.exp = 0;
	}
}