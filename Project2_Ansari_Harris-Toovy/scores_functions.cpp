#include "primaryHeader.h"

void ReadScores(float cStu[])
{
    for (int i = 0; i < NUM_SCORES; i++)
    {
        cout << "Enter score #" << i + 1 << " of " << NUM_SCORES << ": ";
        cin >> cStu[i];
    }
}

