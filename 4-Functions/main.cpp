#include<iostream>
#include<cmath>


void helloFunctions();					//prints "Hello Functions" on the screen
void squares();							//squares the number entered and prints it on the screen
void fractionsToDecimals();				//divides 2 integers into a single float value decimal	
void largestDiffrences();				//finds the largest difference between 3 integers


void helloFunctions()
{
	std::cout << "Hello Functions" << std::endl;
}

void squares()
{
	int a;

	std::cout << "Enter a Numbers: "<<std::endl;
	std::cin >> a;
	
	a = a*a;
	std::cout << "This Number Squared is " << a << std::endl;
}

void fractionsToDecimals()
{
}

void largestDiffrences()
{
	
}

void commas(int num1, int num2)
{
	// puts a comma between 2 int

	std::cout << "Enter 2 Numbers: " << std::endl;
	std::cin >> num1;
	std::cin >> num2;

	std::cout << num1 << "," << num2 << std::endl;
}

void addThree(int x, int y, int z)
{
	std::cout << "Enter 3 Numbers: ";
	std::cin >> x;
	std::cin >> y;
	std::cin >> z;

	int product = x + y + z;
	std::cout << "The Product is " << product << std::endl;
}

//Min
void min(int first, int second)
{
	std::cout << "Enter 2 Numbers: " << std::endl;
	std::cin >> first;
	std::cin >> second;
	
	if (first <= second)
	{
		std::cout << first << " is the smaller of the two" << std::endl;
	}
	else
	{
		std::cout << second << " is the smaller of the two" << std::endl;
	}
}

//Max
void max(int a,int b)
{
	std::cout << "Enter 2 Numbers: " << std::endl;
	std::cin >> a;
	std::cin >> b;

	if (a >= b)
	{
		std::cout << a << " is the bigger of the two" << std::endl;
	}
	else
	{
		std::cout << b << " is the bigger of the two" << std::endl;
	}
}

//Clamp
void clamp(int number1, int number2, int number3)
{

	std::cout << "Enter 3 Numbers: " << std::endl;
	std::cin >> number1;
	std::cin >> number2;
	std::cin >> number3;

	if (number3 < number1)
	{
		number3 = number1;
	}
	else if (number3 > number2)
	{
		number3 = number2;
	}

	std::cout << "The Number is " << number3 << std::endl;

}

//Distance
void distance()
{
	int a1;
	int a2;
	int b1;
	int b2;

	std::cout << "Enter the Distance Between 2 Points : " << std::endl;
	std::cin >> a1;
	std::cin >> a2;
	std::cin >> b1;
	std::cin >> b2;

	int distance1 = (b1 - a1) ^ 2;
	int distance2 = (b2 - a2) ^ 2;

	double dis = sqrt(distance1 - distance2);

	std::cout << "the Distance is " << dis << std::endl;
}

int main()
{
	helloFunctions();
	squares();
	fractionsToDecimals();
	largestDiffrences();

	commas(5, 3);

	addThree(45,56,78);

	min(1,45);

	max(23,56);

	clamp(4,56,23);

	distance();

	system("pause");
}