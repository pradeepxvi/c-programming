// reading the file which doesnot exists

#include <stdio.h>

int main()
{
    FILE *file = NULL;
    char fileName[] = "__example.txt";
    file = fopen(fileName, "r");

    // or you can directly do this
    // FILE *file = fopen("00_example.txt", "r");

    // here file is pointer, when you print the pointer
    // it give you the memory address of file
    // what if the file doesn't exist
    // it gives the result = (nil)
    // pov:you are trying to get the address of such file, that does't exist i.e nil

    printf("%p", file);

    return 0;
}