#pragma once
//Code by Jordan Harris-Toovy and Rayyan Ansari for OIT's CST116-01P project 2, November 2021

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//FOR INITIAL TESTING. REMOVE AFTER USE
int ansariTest(int);
int HTTest(int);

//Retrieve an integer from the user (without prompt). 
int GetData(void);

//Calls functions based on the menu selection number. Input format: menu number, user number.
void ProcessMenuChoice(int, int&);


//Displays Menu
void DisplayMenu(int menuOption = 0);
//Determined whether number is positive, ngeative, or zero.
void IsPosNeg(int number);
//Displays the number of digits in the input
int FindNumDigits(int number);
//Display the addition table
void DisplayAdditionTable();