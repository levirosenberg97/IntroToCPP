#include<iostream>

int main()
{
	/*
	int age = 20;

	std::cout << age<<std::endl; //prints the int

	age = age + 1; // increases the value of age by 1

	std::cout << age<<std::endl;

	age = 34;

	std::cout << age << std::endl;

	int first = 23;
	int second = 6;

	int sum = first + second;

	std::cout << first << " + " << second << " = " << sum << std::endl;

	float numA = 12.3f;
	float numB = 6.3f;

	float numSum = numA + numB;

	std::cout << numA << " + " << numB << " = " << numSum << std::endl;

	int userInput = 0;
	std::cin >> userInput;
	std::cout << "Here is your number: "<< userInput << std::endl;

	system("pause");
	*/


	// Problem A


	int number = 5;

	number = 9;
	number = 11;
	number = 14;

	std::cout << "A) " << number << std::endl;

	// Problem B

	int numberB = 10;
	numberB = 9;

	int thingB = 55;
	thingB = 22;

	std::cout << "B) " << numberB << std::endl;

	// Problem C
	int numberC = 3;
	numberC = 7;
	numberC = 1;

	int somethingC = 23;
	somethingC = 21;

	numberC = somethingC;

	std::cout << "C) " << numberC << std::endl;

	// Problem D

	int numberD = 1;
	int somethingD = 3;

	numberD = somethingD;

	std::cout << "D) " << somethingD << std::endl;

	// Problem E

	int x = 13;

	x = x / 2;

	std::cout << "E) " << x << std::endl;

	// Problem F

	float y = 13;

	y = y / 2;

	std::cout << "F) " << y << std::endl;

	system("pause");

	// Temperture

	float degCelsius = 78.0f;
	float degFahrenheit = 0.0f; // Modify this variable below.

	std::cout << "What is the Temperture in Celsius: ";
	std::cin >>degCelsius;


	degFahrenheit = degCelsius * 1.8 + 32;

								// <Your work goes here>

	std::cout << "Celsius to Fahrenheit)" << std::endl;
	std::cout << "Celsius:    " << degCelsius << std::endl;
	std::cout << "Fahrenheit: " << degFahrenheit << std::endl;

	system("pause");

	//Area of a Rectangle

	float rectWidth = 0.0f;  // Modify this variable below.
	float rectHeight = 0.0f; // Modify this variable below.
	float rectArea = 0.0f;   // Modify this variable below.

	std::cout << "Enter the Rectangles Width: ";
	std::cin >> rectWidth;

	std::cout << "Enter the Rectangles Height: ";
	std::cin >> rectHeight;

	rectArea = rectWidth * rectHeight;

	// <Your work goes here>

	std::cout << "Area of a Rectangle)" << std::endl;
	std::cout << "H: " << rectHeight << " , W: " << rectWidth << std::endl;
	std::cout << "Area: " << rectArea << std::endl;

	system("pause");

	// Averages

	   float a, b, c, d, e;    // Modify these variables below.
       float avg;              // Modify this variable below.
       avg = a = b = c = d = e = 0.0f; // Initialize all to zero.

	   std::cout << "Enter the First Number: ";
	   std::cin >> a;

	   std::cout << "Enter the Second Number: ";
	   std::cin >> b;

	   std::cout << "Enter the Third Number: ";
	   std::cin >> c;

	   std::cout << "Enter the Fourth Number: ";
	   std::cin >> d;

	   std::cout << "Enter the Fifth Number: ";
	   std::cin >> e;

	   avg = a+b+c+d+e/5;
       // <Your work goes here>

       std::cout << "Average of Five)" << std::endl;
       std::cout << a << "," << b << "," << c << "," << d << "," << e << std::endl;
	   std::cout << "The Average is " << avg << std::endl;

	   system("pause");

	   //Number Swap 1

	   int numX = 13;
	   int numY = 24;
	   int numZ = 0;

	   numZ =numX ;
	   numX = numY;
	   numY = numZ;

	   

	   // <Your work goes here>

	   std::cout << "Number Swap)" << std::endl;
	   std::cout << "x is " << numX << std::endl;
	   std::cout << "y is " << numY << std::endl;

	   system("pause");

	   //Age
	
	   float age = 0;
	   float ageDec;
	   int months;
	   // <Your work can go here.>
	   std::cout << "Enter your Age: ";
	   std::cin >> age;

	   
	   // <You must add more lines to output to the terminal>
	   std::cout << "Howdy! You are " << age << " years old!"<< std::endl;
	   ageDec = age / 10;
	   months = age * 12;
	   std::cout << "You've been alive for about " << ageDec << " Decades and "<< months << "months"<< std::endl;

	   system("pause");
		
	   //Name Thing

	   int sage;
	   int bullet_count;
	   float dog_years;
	   int qty;
	   float shield_value;
	   float defense_matrix_cooldown;
	   int red_armor_value;
	   float red_armor_ratio;
	   int happiness;
	   int gandhi_Aggression;

	   //PHTTHHHBBB

	   int num;        // integer
	   float num2;     // single precision floating point
	   bool num3;	   // either true or false
	   short num4;     // an integral point equal to or greater than the size of char
	   char num5;      //
	   double num6;    // can got to the 14th decimal place instead of 7 like a floating point
	   long num7;      // larger than or equal to int
	   long long num8; // larger than an unsigned long
	   long double num9;// larger than or equal to double
	  


	   system("pause");
}