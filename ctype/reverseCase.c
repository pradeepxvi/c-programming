// program to reverse case
#include <stdio.h>
#include <ctype.h>

int main()
{
    char string[100];
    printf("Enter string :");
    scanf("%[^\n]", string);

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (isupper(string[i]))
        {
            string[i] = tolower(string[i]);
        }
        else if (islower(string[i]))
        {
            string[i] = toupper(string[i]);
        }
    }

    printf("Reversed cased string : %s ", string);
    return 0;
}
