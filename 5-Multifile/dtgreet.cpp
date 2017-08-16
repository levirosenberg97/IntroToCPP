#include "dtgreet.h"
#include<iostream>
void dayGreeting(int day, int month, int year)
{
	std::cout << "Hello Today is " << month << "/" << day << "/" << year<<std::endl;
}

void timeGreeting(int hours, int minutes)
{
	std::cout << "The time is " << hours << ":" << minutes << std::endl;
}

bool isLeapYear(int years)
{
	if (true)
	{
		std::cout << "it is a Leap Year!!" << std::endl;
	}
	else
	{
		std::cout << "it is not a Leap Year!!" << std::endl;
	}
	if (years % 4 == 0)
	{
		if (years % 100 == 0)
		{
			return (years % 400 == 0);
		}
		else
		{
			return true;
		}
	}
	else
	{
		return false;
	}

}
