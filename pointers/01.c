#include <stdio.h>

int main()
{
    int myAge;

    printf("%d", myAge);  // Outputs the value of myAge (43)
    printf("%p", &myAge); // Outputs the memory address of myAge

    int *ptr = &myAge;

    printf("\n\n");
    printf("ptr     =  %d\n", *ptr); // 43
    printf("ptr+10   =  %d\n", *(ptr + 10));
    return 0;
}