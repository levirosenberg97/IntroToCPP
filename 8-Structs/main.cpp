#include "Person.h"
#include "Piggy.h"
#include "Student.h"
#include<iostream>
#include "vector2d.h"
#include "battle.h"
using namespace std;

int main()
{
	Person me;
	me.Age = 20;
	me.Weight = 210;

	me.Charisma = 20;
	me.Strength = 80;
	me.dexterity= 32;

	me.cash = 5.0f;

	Person You = { 54,132,12,32,32,432.0f };

	levelUp(me);
	describePerson(me);

	piggybank pinky;
	pinky.ones = 3;
	pinky.twos = 0;
	pinky.fives = 2;

	pinky.quarts = 4;
	pinky.dimes = 10;
	pinky.nickels = 20;
	pinky.pennies = 10;

	calcPiggybankTotal(pinky);
	int course = rand() % 3 + 1;
	students childArray[5];
	printStudentInfo(childArray, 5);
	cout << "The Average Exam Score is: " << averageScores(childArray, 5) << endl;
	medianScore(childArray, 5);
	cout << enrolled(childArray, 5, course) << " Students in Course "<< course << endl;


	Entity Frank{ 23,54,32 };
	Entity Zambambo{ 32,12,24 };

	battle(Frank,Zambambo);

	while (true)
	{}
}