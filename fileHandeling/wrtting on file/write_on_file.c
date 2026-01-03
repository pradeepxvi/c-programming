// writting on file

#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file = NULL;
    char fileName[] = "__example.txt";

    file = fopen(fileName, "w");
    //  here mode 'w' opens the file if it exists
    //  or create file it it doesn't exists

    if (file == NULL)
    {
        printf("%s creation failed !\n", fileName);
        return 1;
    }
    printf("%s is all yours!\n", fileName); // give message of files is opened

    // data to write on file

    char data[] = "I learn slow, but i do !!";

    fprintf(file, "data = %s", data);

    return 0;
}