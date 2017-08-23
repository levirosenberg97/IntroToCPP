#include<iostream>
#include "Player.h"
#include<math.h>
#include<time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	Entity kobe{ 50,30,10 };
	
	cout << "Kobey\n" << endl;
	printStats(kobe);

	kobe.atk = rand() % 30 + 15;
	kobe.def = rand() % 10 + 5;
	kobe.heal = rand() % 9 + 1;

	Entity enemy{ 50,25,9 };
	
	cout << "Enemy\n" << endl;
	printStats(enemy);

	enemy.atk = rand() % 25 + 15;
	enemy.def = rand() % 9 + 4;
	enemy.heal = rand() % 5 + 1;

	fight(kobe, enemy);

	while(true){}
}