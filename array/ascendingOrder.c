// sort the elemets of array in ascending order

#include <stdio.h>

int main()
{
    int num;

    printf("Enter the numner of element of array:");
    scanf("%d", &num);

    int arr[num];

    for (int i = 0; i < num; i++)
    {
        printf("Enter element %d :", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < num - 1; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < num; i++)
    {
        printf("%d  ", arr[i]);
    }

    return 0;
}