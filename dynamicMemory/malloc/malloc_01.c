#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *ptr = malloc(sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed.");
        return 0;
    }

    printf("\n\nEnter number :");
    scanf("%d", ptr);

    printf("\n\nptr = %d\n", *ptr);

    free(ptr);
    return 0;
}