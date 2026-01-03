#include <stdio.h>
#include <string.h>

void rev(char *name)
{
    int len = strlen(name);
    char temp[100];

    for (int i = 0; i < len; i++)
    {
        temp[i] = name[len - 1 - i];
    }
    temp[len] = '\0';

    strcpy(name, temp);
}

int main()
{
    char name[] = "dewal";
    printf("str           =  %s\n", name);
    rev(name);
    printf("reversed str  =  %s\n", name);
    return 0;
}