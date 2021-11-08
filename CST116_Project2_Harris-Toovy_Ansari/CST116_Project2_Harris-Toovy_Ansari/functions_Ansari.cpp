//Code by Rayyan Ansari for OIT's CST116-01P project 2, November 2021

#include "primaryHeader.h"


void DisplayMenu(int& menuOption) {

    cout << "Which of the following choices would you like to choose: " << endl;
    cout << " Option 1: Check if the number is positive or negative. \n Option 2: Check if the number is Odd or Even.";
    cout << "\n Option 3: Find the amount of digits that are in the number. \n Option 4: Find the the position a digit in the number is located at";
    cout << "\n Option 5: Display the addition table. \n Option 6: Display the muultiplication table.\n";
    cout << "Please enter the option you would like to choose: ";
    cin >> menuOption;
    cout << endl;


}

void IsPosNeg(int number) {
    if (number > 0) {

        cout << "The number is positive. \n";

    }

    else if (number < 0) {

        cout << "The number is negative. \n";

    }
    else {

        cout << "The number is Zero. \n";

    }


}

int FindNumDigits(int number) {

    int numDigits = 0;
    if (number == 0) {

        return 0;

    }

    while (number != 0) {

        number = (int)(number / 10);
        numDigits++;

    }

    return numDigits;


}

void DisplayAdditionTable() {




    for (int i = 0; i <= 12; i++) {

        for (int x = 0; x <= 12; x++) {


            cout << setw(2) << i + x << " ";

        }
        cout << endl;

    }


}