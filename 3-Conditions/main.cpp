#include<iostream>

int main()
{
	/*
	bool isDepressed = true;

	if (isDepressed)
	{
		std::cout << "Life is Meaningless" << std::endl;
	}
	else
	{
		std::cout << "I am not Depressed" << std::endl;
	}

	std::cout << "How Sad are you?: ";
	int depression = 0;
	std::cin >> depression;

	if (depression > 70) 
	{
		std::cout << "Seek Counseling" << std::endl;
	}
	else if (depression > 30)
	{
		std::cout << "Get an Ice Cream" << std::endl;
	}
	else
	{
		std::cout << "Having a Good Time" << std::endl;
	}
	*/

	//Problem A
	int numberA = 15;
	if (numberA > 10)
	{
		numberA = numberA * 2;
	}

	std::cout << "A) " << numberA << std::endl;

	//Problem B
	int numberB = 15;
	if (numberB < 15)
	{
		numberB = numberB * 3;
	}

	std::cout << "B) " << numberB << std::endl;

	//Problem C
	int numberC = 12;
	if (numberC == 12)
	{
		numberC = numberC * 2;
	}

	std::cout << "C) " << numberC << std::endl;

	//Problem D
	int numberD = 12;
	if (numberD <= 12)
	{
		numberD = numberD * 0;
	}

	std::cout << "D) " << numberD << std::endl;

	//Problem E
	int numberE = 14;
	if (numberE >= 12)
	{
		numberE *= 4;
	}

	std::cout << "E) " << numberE << std::endl;

	//Problem F
	int numberF = 6;
	if (numberF == 0)
	{
		numberF = 0;
	}
	else if (numberF > 10)
	{
		numberF = 1;
	}

	std::cout << "F) " << numberF << std::endl;

	//Problem G
	int numberG = 6;

	if (numberG < 0)
	{
		numberG = 0;
	}
	else if (numberG < 2)
	{
		numberG = 1;
	}
	else if (numberG < 5)
	{
		numberG = 2;
	}
	else
	{
		numberG = 3;
	}
	std::cout << "G) " << numberG << std::endl;

	//Number Judging
	
	int num = 0;
	std::cout << "Enter a Number between 1-100: ";
	std::cin >> num;

	if (num < 1)
	{
		std::cout << "Dont go under 1" << std::endl;
	}
	else if (num < 50)
	{
		std::cout << num << " is Less than 50" << std::endl;
	}
	else if (num > 100)
	{
		std::cout << "Dont go over 100" << std::endl;
	}
	else if (num > 50)
	{
		std::cout << num << " is Larger than 50" << std::endl;
	}
	else
	{
		std::cout << num << " is the Number in the middle" << std::endl;
	}
	
	//Age Gate

	int age = 0;
	std::cout << "How Old Are You?: ";
	std::cin >> age;

	if (age <= 5)
	{
		std::cout << "go back to preschool" << std::endl;
	}
	else if (age < 18)
	{
		std::cout << "you are a minor" << std::endl;
	}
	else if (age >= 65)
	{
		std::cout << "You are Elligable for Retirement Benefits" << std::endl;
	}
	else if (age >= 50)
	{
		std::cout << "You are Eliigable for AARP" << std :: endl;
	}
	else
	{
		std::cout << "You are an Adult" << std::endl;
	}

	// The Smallest of Three Numbers

	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	std::cout << "Enter a  Three Numbers: " << std::endl;
	std::cin >> num1;
	std::cin >> num2;
	std::cin >> num3;

	if (num1 <= num2 && num1 <= num3)
	{
		std::cout << num1 << " is the Smallest" << std::endl;
	}
	else if (num2 <= num1 && num2 <= num3)
	{
		std::cout << num2 << " is the Smallest" << std::endl;
	}
	else if (num3 <= num1 && num3 <= num2)
	{
		std::cout << num3 << " is the Smallest" << std::endl;
	}

	//Even or Odd

	int even = 0;
	int odd = 0;

	std::cout << "Enter a Number: ";
	std::cin >> even;
	odd = even;
	odd %= 2;
	

	if (odd == 0 )
	{
		std::cout<< even << " is Even"<< std::endl;
	}
	else
	{
		std::cout<< even << " is Odd" << std::endl;
	}

	//Clamp the Number

	int x = 0;

	std::cout << "Enter a Number: ";
	std::cin >> x;

	if (x > 30)
	{
		x = 30;
		std::cout << "Your Number is " << x << std::endl;
	}
	else if (x < 15)
	{
		x = 15;
		std::cout << "Your Number is " << x << std::endl;
	}
	else
	{
		std::cout << "Your Number is " << x << std::endl;
	}

	//Input Validation

	//Field:       Thai Spiciness Rating
	// Constraints: Any number from 0 to 5, inclusive of both ends.
	int thaiSpiceRating = 0;
    std::cout << "How spicy should your food be?\n";
    std::cin >> thaiSpiceRating;
    if (thaiSpiceRating > 5) 
	{
		thaiSpiceRating = 5;
	}
	else if (thaiSpiceRating < 0)
	{
		thaiSpiceRating = 0;
	}
    std::cout << "You ordered with a spiciness rating of " << thaiSpiceRating << "!\n";

	 // Field:       Purchase Order for Cookies
			 // Constraints: Must be ordered in multiples of 23. Only whole numbers.
			 //              Round down to the nearest multiple if not a multiple of 23.
			 //
	int cookies = 0;
	std::cout << "How Many Cookies do you want?: ";
	std::cin >> cookies;

	if (cookies >= 23)
			 {
				 cookies = cookies / 23;
				 std::cout << "You've ordered " << cookies << " bakers dozens of cookies"<< std :: endl;
			 }
	else
			 {
				 std::cout << "error. not enough cookies" << std::endl;
			 }

			 //              If nearest multiple is zero, provide an error message.

			 // Field:       Purchase Order for Sketchbooks (3pk)
			 // Constraints: Must order at least 9 sketchbooks total.
			 //              The total may not exceed 30 sketchbooks ordered.
			 //

	int sketchbooks = 0;
	std::cout << "How Many Sketchbooks do you want?: ";
	std::cin >> sketchbooks;


	if (sketchbooks < 9)
			 {
				 std::cout << "Not enough Books. 9 is the Minimum" << std::endl;
			 }
	else if (sketchbooks > 30)
			 {
				 std::cout << "Too Many Books. 30 is the Maximum" << std::endl;
			 }
	else
			 {
				 std::cout << "You Have Ordered " << sketchbooks << " Sketchbooks" << std::endl;
			 }


			 //              If the total number of sketchbooks ordered does not meet
			 //              the minimum order count or exceeds the maximum order count,
			 //              provide an error message.

			 // Field:       Enable Motion Blur
			 // Constraints: Must be a 'y' or 'n' value.
			 //
	char  letter;
			 
	std::cout << "Enable Motion Blur?(y/n)" << std::endl;
	std::cin >> letter;

	if (letter == 'y')
			 {
				 std::cout << "Motion Blur Enabled" << std::endl;
			 }
	else if(letter == 'n')
			 {
				 std::cout << "Motion Blur Disabled" << std::endl;
			 }
	else
			 {
				 std::cout << "Error not an Option" << std::endl;
			 }

	//              Provide an error message if any other value.

	// ...

	// A Battle of Prehistoric Proportions
	


	system("pause");
}