#include <stdio.h>

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};
    int *p = numbers; // points to the first element of the array

    // Use pointer as an array
    for (int i = 0; i < 5; i++)
    {
        printf("Element %d = %d\n", i, *(p + i));
        printf("Element %d = %d\n\n", i, p[i]);
    }

    return 0;
}
