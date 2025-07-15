#include<stdio.h>

int main()
{

    int i, j;

    int matrix_1[4][4];
    int matrix_2[4][4];
    int sum[4][4];

    printf("Enter the elements of first matrix:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix_1[i][j]);
        }
    }

    printf("Enter the elements of second matrix:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix_2[i][j]);
        }
    }

    // Calculate the sum of the two matrices
    printf("Sum of the two matrices:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            sum[i][j] = matrix_1[i][j] + matrix_2[i][j];
            printf("%d ", sum[i][j]);
        }
    }

    return 0;
}