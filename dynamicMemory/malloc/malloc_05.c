#include <stdio.h>
#include <stdlib.h>

int main()
{
    int len;
    printf("Enter the length of the string: ");
    scanf("%d", &len);

    // Allocate memory (+1 for '\0' null terminator)
    char *str = malloc((len + 1) * sizeof(char));

    if (str == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter a string: ");
    scanf(" %s", str); // No & because str already points to memory

    printf("You entered: %s\n", str);

    free(str); // Always free memory
    return 0;
}
