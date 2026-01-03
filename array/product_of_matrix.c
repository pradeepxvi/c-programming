// wap to find product of 3x3 matrix

#include <stdio.h>

int main()
{
    int arra[3][3], arrb[3][3], arrc[3][3];

    // Input for first matrix
    printf("\nEnter elements of the first matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter [%d][%d]: ", i, j);
            scanf("%d", &arra[i][j]);
        }
    }

    // Input for second matrix
    printf("\nEnter elements of the second matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter [%d][%d]: ", i, j);
            scanf("%d", &arrb[i][j]);
        }
    }

    // Print first matrix
    printf("\nFirst matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arra[i][j]);
        }
        printf("\n");
    }

    // Print second matrix
    printf("\nSecond matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arrb[i][j]);
        }
        printf("\n");
    }
    // pradeep
    //  Matrix multiplication
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arrc[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                arrc[i][j] += arra[i][k] * arrb[k][j];
            }
        }
    }

    // Print result matrix
    printf("\nProduct matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arrc[i][j]);
        }
        printf("\n");
    }

    return 0;
}
