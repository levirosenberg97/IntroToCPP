#include "Student.h"
#include<iostream>
#include<random>
#include<time.h>
using namespace std;


void printStudentInfo(students childArray[],int size)
{
	for (int i = 0; i < size; i++)
	{

		childArray[i].courses = rand() % 3 + 1;
		childArray[i].ID = 12000 + i;
		childArray[i].exam = rand() % 100 + 1;

		cout << "Student ID: " << childArray[i].ID << endl;
		cout << "Course Enrolled: " << childArray[i].courses << endl;
		cout << "Last Exam Score: " << childArray[i].exam << endl;
		cout << "\n" << endl;
	}
	

}

float averageScores(students childArray[], int size)
{
	float avg = 0;
	for (int i = 0; i < size; i++)
	{
		avg += childArray[i].exam;
	}
	return avg / size;
}

void medianScore(students childArray[], int size)
{
	while (true)
	{
		int i = 0;
		bool isSorted;
		for ( i < size; i++;)
		{
			if (childArray[i].exam > childArray[i + 1].exam)
			{
				int temp = childArray[i].exam;


				childArray[i] = childArray[i + 1];
				childArray[i + 1].exam = temp;

				isSorted = false;
			}
			
		}
		if (isSorted = true)
		{
			if (size % 2 == 0)
			{
				float even;
				float odd;
				i = size / 2;
				even = childArray[i].exam;
				i = size / 2 - 1;
				odd = childArray[i].exam;

				childArray[i].exam = (even + odd) / 2;
			}
			else
			{
				i = size / 2 + 1;
			}
			cout << "The Median Score is " << childArray[i].exam << endl;
			break;
		}
	}
}

int enrolled(students childArray[], int size, int grade)
{
	int total = 0;
	for (int i = 0; i < size; ++i)
	{
		if (childArray[i].courses == grade)
		{
			total++;
		}
	}
	return total;
}