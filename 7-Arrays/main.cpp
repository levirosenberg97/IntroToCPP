#include <iostream>
using namespace std;

void printNumbers(int numbers[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << numbers[i] << endl;
	}
}

int sumNumbers(int numbers[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; ++i)
	{
		sum += numbers[i];
	}
	return sum;
}

int smallestValue(int numbers[], int size)
{
	int min = INT_MAX;
	for (int i = 0; i < size; ++i)
	{
		if (numbers[i] < min)
		{
			min = numbers[i];
		}
	}
	return min;
}

int LargestValue(int numbers[], int size)
{
	int max = INT_MIN;
	for (int i = 0; i < size; ++i)
	{
		if (numbers[i] > max)
		{
			max = numbers[i];
		}
	}
	return max;
}

int findIndex(int numbers[], int size, int value)
{
	for (int i = 0; i < size; ++i)
	{
		if (numbers[i] == value)
		{
			return numbers[i];
		}
	
	}
	return -1;
}

int arrayUniqueness(int numbers[], int size)
{
	bool unique;
	for (int i = 0; i < size; ++i)
	{
		for (int j =0; j <size; ++j)
		{
			if (i != j &&numbers[i] == numbers[j])
			{
				unique = true;
			}
			else
			{
				unique = false;
			}
			if (unique = true)
			{
				cout << "Unique" << endl;
			}
			else
			{
				cout << "Not" << endl;
			}
		}
		
	}
	return unique;
}

int main()
{
	int numbers[]{ 0,1,2,3 };


	printNumbers( numbers, 4);

	cout << sumNumbers(numbers, 4) << endl;
	cout << smallestValue(numbers, 4) << endl;
	cout << LargestValue(numbers, 4) << endl;
	cout << findIndex(numbers, 4, 2) << endl;
	system("pause");

}