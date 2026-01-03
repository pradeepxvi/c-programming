// reading the file which  exists

#include <stdio.h>

int main()
{
    FILE *file = NULL;
    char fileName[] = "00_example.txt";
    file = fopen(fileName, "r");

    // here file is pointer, when you print the pointer
    // it give you the memory address of file
    printf("Address of file = %p\n", file);

    // when file does exists and you fopen the file
    //  it doen't give any exceptions or simply errors
    //  but if file is not opened/doesno't exists
    // it give you null(nil)
    // so i did.....
    if (file == NULL)
    {
        printf("%s doesn't exists\n", fileName);
        return 1;
    }

    printf("%s is opened\n", fileName);

    return 0;
}