#pragma once
//Code by Jordan Harris-Toovy and Rayyan Ansari for OIT's CST116-01P project 2, November 2021

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


//Retrieve an integer from the user (without prompt). 
int GetData(void);

//Calls functions based on the menu selection number. Input format: menu number, user number.
void ProcessMenuChoice(int, int&);

//Displays Menu
void DisplayMenu(int &menuOption);

//Determined whether number is positive, ngeative, or zero.
void IsPosNeg(int number);

//Displays the number of digits in the input
int FindNumDigits(int number);

//Display the addition table
void DisplayAdditionTable();

//Determines if the input is odd, even, or zero. Prints the result 
void IsOddEven(int);

//Displays a 12x12 multiplication table
void DisplayMultiplicationTable(void);

//Displays the a digit of the input number. Input format: base number, digit selector
void FindDigitAtPosition(int, int);