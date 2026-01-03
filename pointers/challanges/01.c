// swap

#include <stdio.h>

void swap(int *num1, int *num2)
{

    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    printf("\nBefore Swap..\na = %d\nb = %d", a, b);

    swap(&a, &b);

    printf("\nAfter Swap..\na = %d\nb = %d", a, b);
    return 0;
}