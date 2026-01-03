// wap to find largest number in array.......
#include <stdio.h>

int main()
{
    int num;

    int arr[] = {1, 6, 3, 8, 9, 38};

    for (int i = 0; i < num; i++)
    {
        printf("Enter element %d :", i);
        scanf(" %d", &arr[i]);
    }

    int max = arr[0]; // 5

    // i = 3
    // arr[i] = 15

    for (int i = 0; i < num; i++)
    {
        if (arr[i] > max) // 15 > 20
        {
            max = arr[i];
            // max = 20
        }
    }

    printf("Largest =  %d\n", max);
    return 0;
}
