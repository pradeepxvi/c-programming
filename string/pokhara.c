#include <stdio.h>
#include <string.h>

int main()
{

    char str[] = "pokhara";

    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {

            if (j >= i && j <= len - 1 - i)
            {
                printf(" %c ", str[j]);
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}