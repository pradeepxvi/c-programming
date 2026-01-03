#include <stdio.h>

int main()
{
    {
        int myNumbers[4] = {25, 50, 75, 100};

        // Get the memory address of the myNumbers array
        printf("%p\n", myNumbers);

        // Get the memory address of the first array element
        printf("%p\n", &myNumbers[0]);
    }

    int myNumbers[4] = {25, 50, 75, 100};

    // Get the value of the first element in myNumbers
    printf("\n\n%d", *myNumbers);

    // get all value by pointer
    for (int i = 0; i < 4; i++)
    {
        printf("\n%d\n", *(myNumbers + i));
    }

    // get all value by normal way
    for (int i = 0; i < 4; i++)
    {
        printf("\n%d\n", *(&myNumbers[i]));
    }

    return 0;
}