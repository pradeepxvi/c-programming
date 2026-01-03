// wap to transpose the matrix
#include <stdio.h>
int main()
{

    int matrix_a[2][3];
    int matrix_b[3][2];

    printf("Enter the element of matrix a\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter elemnt %d %d :", i, j);
            scanf("%d", &matrix_a[i][j]);
        }
    }

    printf("\n\nBefore Trasnpose:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            printf("%d   ", matrix_a[i][j]);
        }
        printf("\n");
    }

    printf("\n\nAfter Trasnpose:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix_b[j][i] = matrix_a[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            printf("%d   ", matrix_b[i][j]);
        }
        printf("\n");
    }
}