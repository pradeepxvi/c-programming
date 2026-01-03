// call by refrence and call by value
#include <stdio.h>

//  call by value
void callByValue(int var)
{
    var = var + 10;
}

// call by refrence
void callByRefrence(int *var)
{
    *var += 10;
}

int main()
{

    int x;
    x = 10;

    printf("\nvalue of x before vall by value : %d", x);
    callByValue(x);
    printf("\nvalue of x after vall by value : %d\n", x);

    x = 10;

    printf("\nvalue of x before vall by refrence : %d", x);
    callByRefrence(&x);
    printf("\nvalue of x after vall by refrence : %d\n", x);

    return 0;
}