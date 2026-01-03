// wap to find sum of square of
// first nth number using recursion...
#include <stdio.h>

int sumFunc(int num)
{
    return num == 0 ? 0 : (num * num) + sumFunc(num - 1);
}

int main()
{
    int num;

    printf("Enter number :");
    scanf("%d", &num);

    printf("Sum =  %d", sumFunc(num));
    return 0;
}