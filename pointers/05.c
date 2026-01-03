#include <stdio.h>

int main()
{
    // Create an int variable
    int myInt;

    // Get the memory size of an int
    printf("%zu", sizeof(myInt));

    int myNumbers[4] = {25, 50, 75, 100};

    // Get the size of the myNumbers array
    printf("\n\n%zu", sizeof(myNumbers));
    return 0;
}