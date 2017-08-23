#include "Piggy.h"
#include<iostream>
using namespace std;

float calcPiggybankNotes(piggybank piggy)
{
	float dollars;
	dollars = piggy.ones;
	dollars += piggy.twos * 2;
	dollars += piggy.fives * 5;
	return dollars;
}

float calcPiggybankCoins(piggybank piggy)
{
	float cents;
	cents = piggy.pennies * .01;
	cents += piggy.nickels * .05;
	cents += piggy.dimes * .1;
	cents += piggy.quarts * .25;
	return cents;
}

float calcPiggybankTotal(piggybank piggy)
{
	float total;
	total = calcPiggybankCoins(piggy) + calcPiggybankNotes(piggy);
	cout << "Your Total in your Piggybank is $" << total << endl;
	return total;
}