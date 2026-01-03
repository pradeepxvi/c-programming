#include <stdio.h>

int main()
{
    int myNumbers[4] = {25, 50, 75, 100};

    for (int i = 0; i < 4; i++)
    {
        printf(" %d  ", myNumbers[i]);
    }

    // Change the value of the first element to 13
    *myNumbers = 13;

    // Change the value of the second element to 17
    *(myNumbers + 1) = 17;

    *(myNumbers + 3) = 1000;

    printf("\n\n");

    for (int i = 0; i < 4; i++)
    {
        printf(" %d  ", myNumbers[i]);
    }

    return 0;
}