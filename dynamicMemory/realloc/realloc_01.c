#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num;
    printf("Ente number:");
    scanf("%d", &num);

    int *ptr = calloc(num, sizeof(int));

    if (ptr == NULL)
    {
        printf("memory allocation failed\n");
        return 0;
    }

    ptr = realloc(ptr, num * 2 * sizeof(int));

    for (int i = 0; i < num * 2; i++)
    {
        *(ptr + i) = i * i;
    }

    for (int i = 0; i < num * 2; i++)
    {
        printf("\n%d--> %d * %d =  %d", i, i, i, *(ptr + i));
    }

    free(ptr);

    return 0;
}