#pragma once

struct students
{
	int ID;
	int courses;
	int exam;
};

void printStudentInfo(students childArray[], int size);

//returns the value of all students in an array
float averageScores(students childArray[], int size);

void medianScore(students childArray[], int size);

int enrolled(students childArray[], int size, int grade);