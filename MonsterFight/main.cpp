#include<iostream>
#include"Battle.h"
#include<math.h>
#include<time.h>
#include"Area.h"
#include<stdlib.h>
#include<Windows.h>

using namespace std;

int main()
{
	titleScreen();

	char name[50] = {};
	namePrompt(name);
	int pot = 10;
	
	int maxHp = 0;

	bool gameplay = true;

	char mon[50] = {};
	Entity Player{};
	cout << "_________________________________________________________" << endl;
	delayText(15, "You Exit Your Home\n");
	while (gameplay == true)
	{
		bool wild = false;
		
		startZone(wild, name, mon, Player, maxHp, pot);
		
		int random = 0;
		srand(time(NULL));
		int level = 0;
		while (wild == true)
		{
			colorPicker(2);
			Movement(wild, random, pot, mon, name, Player, maxHp);
			if (random <= 3 && wild == true)
			{
				random = rand() % 3 + 1;
				colorPicker(4);
				cout << "\n\n\nBATTLE INITIATED" << endl;
				colorPicker(7);
				cout << "\n" << name << " Sent Out " << mon << endl;
				cout << "_______________________________________________\n" << endl;
				cout << mon << endl;
				printStats(Player);
				level = Player.lvl;

				Entity stats{};
				Enemies(Player, stats, random, level);

				fight(Player, mon, stats,wild,pot,name);
				levelUp(Player, mon, level, maxHp);
			}
		}
if (Player.lvl == 100)
		{
			delayText(15, "What a Waste of Time");
			break;
		}
	}
	exit(0);
}