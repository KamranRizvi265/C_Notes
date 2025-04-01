#include <stdio.h>

int main() 
{
    int m, n;

    // Input the order of the 2D array
    printf("Enter the number of rows (M): ");
    scanf("%d", &m);
    printf("Enter the number of columns (N): ");
    scanf("%d", &n);

    int array[m][n];

    // Input elements into the 2D array
    printf("Enter the elements of the 2D array:\n");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    // Display the 2D array
    printf("\nThe 2D array is:\n");
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}