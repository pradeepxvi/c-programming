// sort names in aplhabetical order
#include <stdio.h>
#include <string.h>

int main()
{
    int number;

    printf("Enter number of students:");
    scanf(" %d", &number);

    char name[number][100], temp[100];

    for (int i = 0; i < number; i++)
    {
        printf("Enter  %d name:", i + 1);
        scanf(" %[^\n]", name[i]);
    }

    for (int i = 0; i < number; i++)
    {
        for (int j = i + 1; j < number; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    for (int i = 0; i < number; i++)
    {
        printf("\n%s", name[i]);
    }

    return 0;
}