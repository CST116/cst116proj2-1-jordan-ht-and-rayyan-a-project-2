//Code by Jordan Harris-Toovy for OIT's CST116-01P project 2, November 2021

#include "primaryHeader.h"

//Retrieve an integer from the user (without prompt). If the magnitude of the value is greter then 1 million, reject it and ask again.
int GetData(void)
{
	bool valid = true;
	int passback = 0;

	while (valid)
	{
		cin >> passback;

		if ((passback > 1'000'000) || (passback < -1'000'000))
		{
			cout << "Input out of range. Enter input again: ";
		}
		else
		{
			valid = false;
		}
	}

	return passback;
}

//Calls functions based on the menu selection number. Input format: menu number, user number.
void ProcessMenuChoice(int menuIndex, int &userValue)
{
	int numOrder = 0;

	switch (menuIndex)
	{
	case(1):

		IsPosNeg(userValue);
		cout << endl;

		break;
	case(2):

		IsOddEven(userValue);
		cout << endl;

		break;
	case(3):
		
		numOrder = FindNumDigits(userValue);

		cout << "The number of digits in " << userValue << " is " << numOrder << endl;

		break;
	case(4):

		cout << "Enter the position of desired digit: ";

		numOrder = GetData();

		FindDigitAtPosition(userValue, numOrder);

		break;
	case(5):

		DisplayAdditionTable();

		break;
	case(6):

		DisplayMultiplicationTable();

		break;
	default:
		
		cout << "Menu entry invalid" << endl;

		break;
	}
}

//Determines if the input is odd, even, or zero. Prints the result 
void IsOddEven(int userValue)
{
	if (userValue == 0)
	{
		cout << "The number is zero";
	}
	else if (((userValue % 2) == 1) || ((userValue % 2) == -1))
	{
		cout << "The number " << userValue << " is odd";
	}
	else
	{
		cout << "The number " << userValue << " is even";
	}
}

//Displays a 12x12 multiplication table
void DisplayMultiplicationTable(void)
{
	for (int idy = 0; idy < 12; idy++)
	{
		for (int idx = 0; idx < 12; idx++)
		{
			cout << setw(3) << (idx + 1) * (idy + 1) << " ";
		}
		cout << endl;
	}
}

//Displays the a digit of the input number. Input format: base number, digit selector
void FindDigitAtPosition(int userValue, int selector)
{
	int finalNumber = 0;

	if ((selector > FindNumDigits(userValue)) || (selector < 0))
	{
		cout << "Selected position out of range" << endl;
	}
	else
	{
		cout << "The digit of " << userValue << " in position " << selector << " is ";

		for (int idx = 0; idx < (selector - 1); idx++)
		{
			userValue /= 10;
		}
		finalNumber = abs(userValue % 10);

		cout << finalNumber << endl;
	}
}