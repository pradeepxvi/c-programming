#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *ptr = calloc(1, sizeof(int));
    int *ptrr = calloc(1, sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.");
        return 0;
    }

    *ptr = 100;

    printf("valuep at ptr = %d\n", *ptr);  // 100
    printf("value at ptrr = %d\n", *ptrr); // 0

    free(ptr);
    return 0;
}