// sum of diagonal element of 3 X 3 matrixx.....
#include <stdio.h>

int main()
{
    int arra[3][3], sum = 0;

    printf("\n\nEnter element of matrix...\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter element arr[%d][%d]:", i, j);
            scanf("%d", &arra[i][j]); // pradeep
        }
    }

    for (int i = 0; i < 3; i++)
    {
        sum += arra[i][i];
    }

    printf("\n\nmatrix...\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d   ", arra[i][j]);
        }
        printf("\n");
    }

    printf("sum of diagnal of matrix is %d", sum);

    return 0;
}