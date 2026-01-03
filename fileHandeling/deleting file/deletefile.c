#include <stdio.h>

int main()
{
    char fileName[] = "__example.txt";
    char *file = fileName;

    int rmv = remove(file);

    if (rmv == 0)
    {
        printf("%s removed!!\n", file);
        return 0;
    }
    printf("Error on removing %s!!\n", file);

    return 0;
}