#include <iostream>
#include <cstring>

using namespace std;

//
//void  addStrings(char dest[], int size, char src1[], char src2[])
//{
//	strcpy_s(dest, size, src1);
//	strcat_s(dest, size, src2);
//
//
//}
void namePrompt()
{
	char input[50] = {};

	cout << "Please input your Name: ";
	cin >> input;

	cout << "Hello " << input << "!" << endl;

	system("pause");
}

void colors()
{
	char blue[] = "blue";
	char red[] = "red";

	cout << "What is Your Favorite Color: ";
	char input[50] = {};
	cin >> input;

	if (strcmp(blue, input) == 0)
	{
		cout << "That Color means you're Depressed. Kill Yourself" << endl;
	}
	else if (strcmp(red, input) == 0)
	{
		cout << "You have Anger Problems" << endl;
	}
	else
	{
		cout << "Die in a Fire" << endl;
	}

	system("pause");
}

void spaceInvader()
{
	char input[50] = {};
	char space = 32;

	cout << "Type in Whatever: ";
	cin.getline(input, 50);

	for (int i = 0; i < 50; i++)
	{
		if (input[i] != space)
		{
			cout << input[i];
		}
	}
	system("pause");
}

void palindrome()
{
	char input[50] = {};
	
	cin.getline(input, 50);

	int length = strlen(input);
	
	if (input[1] = input[length])
	{
		cout << "Yep" << endl;
	}
	else
	{
		cout << "Nope" << endl;
	}
	

	system("pause");
}

void main()
{
	//char buffer[80] = { 0 };

	//char cstring[] = "Dinosaurs are cool!";
	//char buffer2[80] = { 0 };

	//strcpy(buffer, "String");
	//
	//int length = strlen(buffer);

	//strcat_s(buffer, cstring);
	
	//namePrompt();
	//colors();
	//spaceInvader();

	palindrome();

}