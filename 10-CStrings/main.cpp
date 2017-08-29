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

bool isAlpha(char query )
{
return  query >= 'A' && query <= 'Z' ||
		query >= 'a' && query <= 'z';
}

char toLower(char query)
{
	if (query >= 'A' && query <= 'Z')
		query += 'a' - 'A';
	return query;
}

bool palindrome(char string[])
{
	int i = 0, j = strlen(string)-1;
	bool hasChar = false;
	do
	{
		while (!isAlpha(string[i]) && i < strlen(string)) i++;
		while (!isAlpha(string[j]) && j >= 0) j--;

		if (i >= strlen(string) || j < 0)
			return hasChar;

		if (toLower(string[i]) != toLower(string[j]))
			return false;
		i++;
		j--;
		hasChar = true;

	} while (j >= 0);

	return true;
}

void main()
{
	char buffer[80];

	//char cstring[] = "Dinosaurs are cool!";
	//char buffer2[80] = { 0 };

	//strcpy(buffer, "String");
	//
	//int length = strlen(buffer);

	//strcat_s(buffer, cstring);
	
	//namePrompt();
	//colors();
	//spaceInvader();
	cin.getline(buffer, 80);
	cout << palindrome(buffer) << endl;
	system("pause");
}