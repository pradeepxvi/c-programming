#include <stdio.h>
#include <string.h>

void swap(char (*first)[100], char (*last)[100])
{
    char temp[100];
    strcpy(temp, *first);
    strcpy(*first, *last);
    strcpy(*last, temp);
}

int main()
{
    char name[10][100];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter name %d: ", i + 1);
        scanf(" %[^\n]", name[i]);
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (strcmp(name[j], name[j + 1]) > 0)
            {
                swap(&name[j], &name[j + 1]);
            }
        }
    }

    printf("\nSorted names in descending order:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%s\n", name[i]);
    }

    return 0;
}
