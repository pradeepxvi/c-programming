#include <stdio.h>

int main()
{
    int myNumbers[4] = {25, 50, 75, 100};

    for (int i = 0; i < 4; i++)
    {
        printf("%p\n", myNumbers + i);
        printf("%p\n", &myNumbers[i]);
        printf("\n");
    }

    printf("\n\n%d", &myNumbers);

    return 0;
}