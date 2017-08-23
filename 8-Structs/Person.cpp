#include "Person.h"
#include <iostream>
using namespace std;

void describePerson(Person larry)
{
	cout << "Age: " << larry.Age << endl;
	cout << "Weight: " << larry.Weight << endl;
	cout << " Cha: " << larry.Charisma << endl;
	cout << " Str: " << larry.Strength << endl;
	cout << " Dex: " << larry.dexterity << endl;
	cout << "Gold: " << larry.cash << endl;
}


void levelUp(Person &larry)
{
	larry.Age = larry.Age + 1;
}