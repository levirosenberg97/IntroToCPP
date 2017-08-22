#include <iostream>
using namespace std;

void printNumbers(int numbers[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << numbers[i];
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
			return i;
		}
	
	}
	return -1;
}

bool arrayUniqueness(int numbers[], int size)
{
	bool unique;
	for (int i = 0; i < size; ++i)
	{
		for (int j =0; j <size; ++j)
		{
			if (i == j)
			{
				unique = true;
			}
			else if (numbers[i] == numbers[j])
			{
				unique = false;
				cout << "not unique" << endl;
				return false;
			}
		}
	}
	
	cout << "Unique" << endl;
	return true;
}

void reverseArray(int numbers[], int size)
{
	for (int i = 0; i < size/2; ++i)
	{
		int temp = numbers[i];

		numbers[i] = numbers[size - 1 - i];

		numbers[size - 1 - i] = temp;
	}

}

void sortAscend(int numbers[], int size)
{
	while (true)
	{
		bool isSorted = true;

		for (int i = 0; i < size - 1; ++i)
		{
			if (numbers[i] > numbers[i + 1])
			{
				int temp = numbers[i];


				numbers[i] = numbers[i + 1];
				numbers[i + 1] = temp;

				isSorted = false;
			}
		}
		if (isSorted)
		{
			break;
		}
	}
}

void sortDescend(int numbers[], int size)
{
	sortAscend(numbers, size);
	reverseArray(numbers, size);
}

int main()
{
	int numbers[]{ 7,2,3,1 };


	printNumbers( numbers, 4);
	cout << "\n";
	cout << sumNumbers(numbers, 4) << endl;
	cout << smallestValue(numbers, 4) << endl;
	cout << LargestValue(numbers, 4) << endl;
	cout << findIndex(numbers, 4, 2) << endl;
	cout << arrayUniqueness(numbers,4) << endl;
	reverseArray(numbers, 4);
	printNumbers(numbers, 4);
	cout << "\n";
	sortAscend(numbers, 4);
	printNumbers(numbers, 4);
	cout << "\n";
	sortDescend(numbers, 4);
	printNumbers(numbers, 4);
	cout << "\n";
	system("pause");

}