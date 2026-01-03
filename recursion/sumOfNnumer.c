// sum of n number using resursive function....

#include <stdio.h>

int sumOf(int num)
{
    if (num == 0)
    {
        return 0;
    }

    return num + sumOf(num - 1);
}

int main()
{
    printf("Enter number:");
    int num;
    scanf("%d", &num);

    printf("The sum of %d is %d\n\n", num, sumOf(num));
    return 0;
}