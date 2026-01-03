//             *
//          *  *  *
//       *  *  *  *  *
//    *  *  *  *  *  *  *
// *  *  *  *  *  *  *  *  *

#include <stdio.h>
int main()
{
    int row = 5;
    for (int i = 1; i <= row; i++) // normal pyramid
    // for (int i = row; i >= 1; i--) // inverteed pyramid
    {
        for (int j = 0; j < row * 2; j++)
        {
            if (j > row - i && j < row + i)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}
