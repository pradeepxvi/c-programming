#include <stdio.h>
int main()
{
    int var[] = {104, 101, 108, 108, 111, 32, 119, 111, 114, 108, 100};

    for (int i = 0; i < 11; i++)
    {
        printf("%c", var[i]);
    }
    return 0;
}