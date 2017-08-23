#pragma once

struct Person
{
	int Age;
	float Weight;

	int Charisma;
	int Strength;
	int dexterity;

	float cash;
};

void describePerson(Person larry);
void levelUp(Person &larry);