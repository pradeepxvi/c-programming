// what empty allocation(malloc) returns ????
//  a garbage value

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 1000;
    int *ptr = malloc(num * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 0;
    }

    for (int i = 0; i < num; i++)
    {
        *(ptr + i) = i * i;
        printf("\n%d * %d = %d", i, i, *(ptr + i));
    }

    free(ptr);
    return 0;
}