// wap to find sum of two matrix
#include <stdio.h>
int main()
{
    int row, col;

    printf("\n\nEnter number of row:");
    scanf("%d", &row);

    printf("\n\nEnter number of col:");
    scanf("%d", &col);

    int matrix_a[row][col];
    int matrix_b[row][col];
    int matrix_sum[row][col];

    printf("\n\nEnter element of matrix a\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter element [%d, %d] :", i, j);
            scanf("%d", &matrix_a[i][j]);
        }
    }

    printf("\n\nEnter element of matrix b\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter element [%d, %d] :", i, j);
            scanf("%d", &matrix_b[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matrix_sum[i][j] = matrix_a[i][j] + matrix_b[i][j];
        }
    }

    printf("\n\nElements of matrix sum:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", matrix_sum[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}