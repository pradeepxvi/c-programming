#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num;

    printf("Enter the number of value you want to store:");
    scanf("%d", &num);

    int *ptr = malloc(num * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.");
        return 0;
    }

    printf("\n\n");

    for (int i = 0; i < num; i++)
    {
        printf("Enter nunber:");
        scanf(" %d", ptr + i);
    }

    printf("\n\n");

    for (int i = 0; i < num; i++)
    {
        printf("the value at index %d  = %d\n", i, *(ptr + i));
    }

    free(ptr);
    return 0;
}