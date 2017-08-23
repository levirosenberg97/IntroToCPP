#pragma once

struct piggybank
{
	int ones;
	int twos;
	int fives;
	int quarts;
	int dimes;
	int nickels;
	int pennies;
};

float calcPiggybankNotes(piggybank piggy);

float calcPiggybankCoins(piggybank piggy);

float calcPiggybankTotal(piggybank piggy);