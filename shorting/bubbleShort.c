// bubble sorting
#include <stdio.h>

int main()
{
    int arr[] = {4, 5, 2, 7, 8, 9, 2, 5, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
}
