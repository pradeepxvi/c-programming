// creating file

#include <stdio.h>

int main()
{
    FILE *file = NULL;
    char fileName[] = "__example.txt";

    file = fopen(fileName, "a");
    //  here mode 'w' opens the file if it exists
    //  or create file it it doesn't exists

    // or you can use a mode to create file

    if (file == NULL)
    {
        printf("%s creation failed !\n", fileName);
        return 1;
    }

    printf("%s is all yours!\n", fileName); // give message of files is opened

    return 0;
}