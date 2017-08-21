#include<iostream>
using namespace std;

void printXY(int x, int y)
{
	do
	{
		cout << x << endl;
		x++;
	} while (x <= y);
}

int promptLargest(int qtyRequested)
{
	int max = INT_MIN;
	int userImput = 0;
	cout << "Enter " << qtyRequested << " Numbers to Find the Largest" << endl;
	while (qtyRequested > 0)
	{
		cin >> userImput;
		if (userImput > max)
		{
			max = userImput;
		}
		qtyRequested = qtyRequested - 1;
	}
	cout << "The Largest Number is "<<max<< endl;
	return max;
}

int promptSmallest(int qtyRequested)
{
	int min = INT_MAX;
	int userImput = 0;
	cout << "Enter " << qtyRequested << " Numbers to Find the Smallest" << endl;
	while (qtyRequested > 0)
	{
		cin >> userImput;
		if (userImput < min)
		{
			min = userImput;
		}
		qtyRequested = qtyRequested - 1;
	}
	cout << "The Smallest Number is " << min << endl;
	return min;
}

void EvenOrOdd(int start, int end)
{
	int odd;
	do
	{
		odd = start;
		odd %= 2;
		if (odd == 0)
		{
			cout << "Even" << endl;
		}
		else
		{
			cout << "Odd" << endl;
		}
		start++;
	} while (start <= end);
}

void fizzBuzz(int start, int end)
{
	for (int i = start; i <= end; ++i)
	{
		if (i % 3 == 0)
		{
			cout << "Fizz";
			if (i % 5 == 0)
			{
				cout << "Buzz";
			}
			cout << "\n";
		}
		else if (i % 5 == 0)
		{
			if (i % 3 == 0)
			{
				cout << "Fizz";
			}
			cout << "Buzz";
			cout << "\n";
		}
		else
		{
			cout << i << endl;
		}
	}
}

void gridGen(int width, int height)
{
	for (int i = 1; i <= height *width; i++)
	{
		cout << "X";

		if (i%width == 0)
		{
			cout << "\n";
		}
	}
}

void guessTheNumber(int lower, int upper, int tryCount)
{
	bool success;
	int secret = rand() % (upper-lower) + lower;
	int input = 0;
	for (int i = 0; i < tryCount; ++i)
	{
		
		cout << "Make a Guess " << tryCount - i<<"-Tries Remaining" << endl;
		cin >> input;
		if (input > secret)
		{
			cout << "to High" << endl;
		}
		else if (input < secret)
		{
			cout << " To Low" << endl;
		}
		else
		{
			success = true;
			break;
		}
	}
	if (success)
	{
		cout << "gg ez" << endl;
	}
	

}

int main()
{
	////while
	//int iter = 0;
	//while (iter < 11)
	//{
	//	cout << iter << endl;
	//	iter++;
	//}

	////for
	//for (int i = 0; i < 11; ++i)
	//{
	//	cout << i << endl;
	//}

	////do-while
	//int j = 0;
	//do
	//{
	//	cout << j << endl;
	//	++j;
	//} while (j < 11);

	////simple imput validation
	//int userInput = -1;
	//do
	//{
	//	cout << "Enter a Number Between 1-5: " << endl;
	//	cin >> userInput;
	//} while (userInput < 0 || userInput>5);

	//cout << "YAY!!!!!" << endl;


	//From 1 to 100
	for (int num = 1; num < 101; num++)
	{
		cout << num << endl;
	}

	//From 100 to 1
	int z = 100;
	while (z > 0)
	{
		cout << z << endl;
		z--;
	}

	//from 1995 to 2017
	int year = 1995;
	do
	{
		cout << year << endl;
		year++;
	} while (year < 2018);

	system("pause");

	//Three Fav Positive Numbers
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	cout << "What are Your Three Favorite Positive Numbers?" << endl;
	do
	{
		 cout << "Enter Your First Number: " << endl;
		cin >> num1;
	} while (num1 < 0);
	cout << "Your First Number is " << num1 << endl;

	do
	{
		cout << "Enter Your Second Number: " << endl;
		cin >> num2;
	} while (num2 < 0);
	cout << "Your Numbers so Far are " << num1 << " and " << num2 << endl;

	do
	{
		cout << "Enter Your Third Number: " << endl;
		cin >> num3;
	} while (num1 < 0);
	cout << "Your Favorite Numbers are " << num1 << ", " << num2 << ", and "<< num3 << endl;


	system("pause");

	// From X to Y
	printXY(1, 10);

	system("pause");

	// Largest of Any Numbers

	promptLargest(4);

	system("pause");

	//Smallest of any Numbers

	promptSmallest(6);

	system("pause");

	// Even or Odd 2: Even Harder
	EvenOrOdd(3,8);

	system("pause");

	//Fizz Buzz
	fizzBuzz(1, 15);

	system("pause");

	//Grid Generator
	gridGen(5, 5);

	//Higher or Lower
	guessTheNumber(23, 54, 21);

	system("pause");
}