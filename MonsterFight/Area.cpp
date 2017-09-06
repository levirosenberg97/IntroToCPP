#include "Area.h"
#include <iostream>
#include<time.h>
#include<random>
#include "Battle.h"
#include <Windows.h>

using namespace std;

void titleScreen()
{
	colorPicker(142);
	cout << " _____     _       _    _____             _   " << endl;
	cout << "|   __|___|_|___ _| |  |     |_ _ ___ ___| |_ " << endl;
	cout << "|  |  |  _| |   | . |  |  |  | | | -_|_ -|  _|" << endl;
	cout << "|_____|_| |_|_|_|___|  |__  _|___|___|___|_|  " << endl;
	cout << "                          |__|                " << endl;
	timedPause(600);
	colorPicker(7);
}

void Movement(bool &exit, int &grass, int &pot,char mon[50],char name[50], Entity player, int maxHP)
{
	char in = 0;
	grass = 0;
	while (in == 0)
	{
		srand(time(NULL));

		delayText(15, "\n\n\n\n\nEnter the Direction you Want to Go\n 'n' for north\n 's' for South\n 'e' for East\n 'w' for West\n \n");
		colorPicker(14);
		delayText(15, "'a' to Heal with a Potion\n");
		colorPicker(12);
		delayText(15, "'q' to exit the Grass and Return to Home\n");
		colorPicker(2);
		cout << "___________________________________________________" << endl;
		cin >> in;

		if (in == 'n')
		{
			delayText(15, "North\n");
			grass = rand() % 10 + 1;

			if (grass <= 3)
			{
				break;
			}
			else
			{
				in = 0;
			}
		}
		else if (in == 's')
		{
			delayText(15, "South\n");
			grass = rand() % 10 + 1;

			if (grass <= 3)
			{
				break;
			}
			else
			{
				in = 0;
			}
		}
		else if (in == 'e')
		{
			delayText(15, "East\n");
			grass = rand() % 10 + 1;

			if (grass <= 3)
			{
				break;
			}
			else
			{
				in = 0;
			}
		}
		else if (in == 'w')
		{
			delayText(15, "West\n");
			grass = rand() % 10 + 1;

			if (grass <= 3)
			{
				break;
			}
			else
			{
				in = 0;
			}
		}
		else if (in == 'q')
		{
			exit = false;
			return;
		}
		else if(in == 'a')
		{
			player.heal = rand() % (player.hp) + 3;
			if (player.hp < maxHP)
			{
				player.hp = player.hp + player.heal;
				pot--;
				delayText(15, name);
				delayText(15, " Used a Potion on ");
				delayText(15, mon);
				cout << " | ";
				delayText(15, mon);
				delayText(15, " Has ");
				cout << player.hp << " HP | " << endl;
				cout << pot;
				delayText(15, " Potions Remaining\n");
				if (player.hp >= maxHP)
				{
					player.hp = maxHP;
				}
				grass = 5;
			}
			else
			{
				pot--;
				delayText(15, "What a Waste | ");
				cout << pot; 
				delayText(15, " Potions Remaining\n");
				grass = 5;
			}

		}
		else
		{
			in = 0;
		}


	}
}

void startZone(bool &fight,char name[50] ,char mon[50], Entity &Player, int &maxHp, int &pot)
{
	char in = 0;
	
	timedPause(600);
	while (in == 0)
	{
		colorPicker(15);
		delayText(15, "\n\nTo the North is the Professors Office.\n");	
		if (Player.hp == 0 && Player.atk == 0 && Player.def == 0)
		{
			delayText(25, "You can recieve a Monster here\n ");
		}


		delayText(15, "\nTo the South is the Marketplace \n");
		if (Player.hp == 0 && Player.atk == 0 && Player.def == 0)
		{
			delayText(25, "You can buy Items Here\n");
		}


		delayText(15, "\nTo the West is Wild grass that seems endless \n");
		if (Player.hp == 0 && Player.atk == 0 && Player.def == 0)
		{
			delayText(25, "You fight Monsters Here\n");
		}


		delayText(15, "\nTo the East is Your Home \n");
		if (Player.hp == 0 && Player.atk == 0 && Player.def == 0)
		{
			delayText(25, "You Heal your Monster Here \n");
		}


		delayText(15, "\n \nWhere do You Want To Go\n");
		delayText(25, "'n' for North | 's' for South | 'w' for West | 'e' for East\n'b' To check your Monsters Stats\n\n");
		cout << "_________________________________________________________" << endl;
		cin >> in;

		if (in == 'n')
		{
			colorPicker(10);
			profHouse(in, name, mon, Player, maxHp);
		}
		else if (in == 's')
		{
			if (Player.hp == 0 && Player.atk == 0 && Player.def == 0)
			{
				colorPicker(12);
				delayText(15, "You Cant Go Here Yet\n");
				in = 0;
			}
			else
			{
				colorPicker(5);
				marketPlace(in, name, mon, Player, pot);
			}
		}
		else if (in == 'w')
		{
			if (Player.hp == 0 && Player.atk == 0 && Player.def == 0)
			{
				colorPicker(12);
				delayText(15, "You'd be Killed by Monsters\nGo to the Professors Office to Get a Monster First\n");
				in = 0;
			}
			else
			{
				fight = true;
			}
		}
		else if (in == 'e')
		{
			if (Player.hp == 0 && Player.atk == 0 && Player.def == 0) 
			{
				colorPicker(12);
				delayText(15, "You Just Left Here\n");
				in = 0;
			}
			else
			{
				colorPicker(14);
				Home(in, name, mon, Player, maxHp);
			}
		}
		else if(in == 'b')
		{
			if (Player.hp == 0 && Player.atk == 0 && Player.def == 0)
			{
				colorPicker(12);
				delayText(15, "You Don't Have a Monster Yet\n");
				in = 0;
			}
			else
			{
				printStats(Player);
				in = 0;
			}
		}
		else
		{
			in = 0;
		}
	}


}

void profHouse(char &in, char name[50], char mon[50], Entity &Player, int &maxHp)
{
	if (Player.hp > 0 && Player.atk > 0 && Player.def > 0)
	{
		cout << "You Have No Reason to Go Here" << endl;

		in = 0;
	}
	if (Player.hp == 0 && Player.atk == 0 && Player.def == 0)
	{
		delayText(25, "\n\n\n\n\n\nYou Walk in to the Professors Office\nYou are Greeted instantly by Professor Tree\n");
		delayText(25, "Tree walks you over to The Monster Creator\n\n");
		Creature(Player, mon, maxHp);
		delayText(25, "\n\nYou now have access to the rest of the Town!!!\n");
		in = 0;
	}
}

void Home(char &in, char name[50], char mon[50], Entity &Player, int &maxHp)
{
	delayText(25, name);
	delayText(25, " and ");
	delayText(25, mon);
	delayText(25, " Rested to Heal Their Wounds\n");
	Player.hp = maxHp;

	in = 0;
}

void marketPlace(char &in, char name[50], char mon[50], Entity &Player, int &pot)
{
	char input = 0;
	int increase = 0;
	delayText(15, "\n\n WELCOME TO THE MARKET\n");
	cout << "______________________________________________" << endl;
	colorPicker(6);
	delayText(15, "DollaryDoos: ");
	cout << Player.money << endl;
	colorPicker(5);
	while (input >= 0)
	{
		delayText(15, "\n\n1.Protein Powder: 50 DollaryDoos 'Increase a Monsters Attack'\n");
		delayText(15, "2.Healthy Mushroom: 80 DollaryDoos 'Increases a Monsters HP'\n");
		delayText(15, "3.Hardening Fruit: 50 DollaryDoos 'Increases a Monsters Defense'\n");
		delayText(15, "4.Health Potion: 35 DollaryDoos 'Heals for a Random Amount'\n");
		colorPicker(12);
		delayText(15, "'q' to leave the shop\n");
		colorPicker(5);
		cin >> input;



		if (input == '1')
		{
			if (Player.money < 50)
			{
				colorPicker(12);
				delayText(10, "Not Enough DollaryDoos\n");
				input = 0;
			}
			else
			{
				Player.money -= 50;
				increase = rand() % 10 + 1;
				colorPicker(11);
				cout << mon << "'s ATK: " << Player.atk << "+" << increase << endl;
				Player.atk += increase;
			}
			colorPicker(5);
		}
		else if (input == '2')
		{
			if (Player.money < 80)
			{
				colorPicker(12);
				delayText(10, "Not Enough DollaryDoos\n");
				input = 0;
			}
			else
			{
				Player.money -= 80;
				increase = rand() % 10 + 1;
				colorPicker(11);
				cout << mon << "'s HP: " << Player.hp << "+" << increase << endl;
				Player.hp += increase;
			}
			colorPicker(5);
		}
		else if (input == '3')
		{
			if (Player.money < 50)
			{
				colorPicker(12);
				delayText(10, "Not Enough DollaryDoos\n");
				input = 0;
			}
			else
			{
				Player.money -= 50;
				increase = rand() % 10 + 1;
				colorPicker(11);
				delayText(15, mon);
				delayText(15, "'s DEF: ");
				cout << Player.def;
				delayText(15, "+");
				cout <<  increase << endl;
				Player.def += increase;
			}
			colorPicker(5);
		}
		else if (input == '4')
		{
			if (Player.money < 35)
			{
				colorPicker(12);
				delayText(10, "Not Enough DollaryDoos\n");
				input = 0;
			}
			else
			{
				Player.money -= 35;
				pot++;
				delayText(15, name);
				delayText(15, " has ");
				cout << pot;
				delayText(15, " Potions");
			}
		}
		else if (input == 'q')
		{
			in = 0;
			break;
		}
		else
		{
			input = 0;
		}
	}
}

void namePrompt(char input[50])
{
	delayText(15, "Please input your Name: ");
	cin >> input;
	timedPause(100);
}

void colorPicker(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void timedPause(int millisec)
{
	Sleep(millisec);
}

void delayText(int millisec, char word[])
{
	for (int i = 0; i < strlen(word); i++)
	{
		cout << word[i];
		Sleep(millisec);
	}
}

