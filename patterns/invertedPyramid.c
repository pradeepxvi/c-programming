#include <stdio.h>

int main()
{
    int row = 5;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j <= row * 2; j++)
        {
            if (j >= i && j <= row * 2 - i)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    return 0;
}