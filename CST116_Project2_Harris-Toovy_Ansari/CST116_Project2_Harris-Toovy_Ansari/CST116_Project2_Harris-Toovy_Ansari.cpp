//Code by Jordan Harris-Toovy (jordan.harristoovy@oit.edu) and Rayyan Ansari (rayyan.ansari@oit.edu) for OIT's CST116-01P project 2, November 2021

#include "primaryHeader.h"

int main()
{
    int menuSelector = 0, userNumber = 0;

    DisplayMenu(menuSelector);

    //Preliminary input check in order to only get required data
    if ((menuSelector <= 4) && (menuSelector > 0))
    {
        cout << "Enter a number: ";
        userNumber = GetData();
    }

    ProcessMenuChoice(menuSelector, userNumber);

    return (0);
}
