//Code by Jordan Harris-Toovy and Rayyan Ansari for OIT's CST116-01P project 2, November 2021

#include "primaryHeader.h"

//void ReadScores(float[]);

int main(void)
{
    float test[NUM_SCORES]{ 0 };

    ReadScores(test);

    cout << test[2];

    return (0);
}
