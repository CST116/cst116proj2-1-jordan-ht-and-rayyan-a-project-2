//Code by Jordan Harris-Toovy for OIT's CST116-01P project 2, November 2021

#include "primaryHeader.h"

//FOR INITIAL TESTING. REMOVE AFTER USE
int HTTest(int in)
{
	return in * 3;
}

//(1) Retrieve an integer from the user (without prompt). If the magnitude of the value is greter then 1 million, reject it and ask again.
int GetData(void)
{
	bool valid = true;
	int passback = 0;

	while (valid)
	{
		cin >> passback;

		if ((passback > 1'000'000) || (passback < -1'000'000))
		{
			cout << "Input out of range. Enter input again:";
			valid = false;
		}
		else
		{
			valid = true;
		}
	}

	return passback;
}

//(3) Calls functions based on the menu selection number. Input format: menu number, user number. ---TODO: ADD FUNCTION CALLS
void ProcessMenuChoice(int menuIndex, int &userValue)
{
	switch (menuIndex)
	{
	case(1):

		//TODO: ADD FUNCTION CALL HERE

		break;
	case(2):

		//TODO: ADD FUNCTION CALL HERE

		break;
	case(3):

		//TODO: ADD FUNCTION CALL HERE

		break;
	case(4):

		//TODO: ADD FUNCTION CALL HERE

		break;
	case(5):

		//TODO: ADD FUNCTION CALL HERE

		break;
	case(6):

		//TODO: ADD FUNCTION CALL HERE

		break;
	case(7):

		//TODO: ADD FUNCTION CALL HERE

		break;
	default:
		
		cout << "Menu entry invalid";

		break;
	}
}

//(4) Displays if the input is positive, negative, or zero.
void IsPosNeg(int input)
{

	if (input > 0)
	{
		cout << "The input number is positive.";
	}
	else if (input < 0)
	{
		cout << "The input number is negative.";
	}
	else
	{
		cout << "The input number is zero.";
	}
}

//(6) Returns the number of digits (powers of 10). Example: Input 123456, Output 5 
int FindNumDigits(int input)
{
	int resultant = 0;

	while (abs(input) > 1)
	{
		input /= 10;
		resultant++;
	}

	return resultant;
}