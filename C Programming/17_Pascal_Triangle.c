#include<stdio.h>

int main()
{
    int n, i, j, c = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)  // Print leading spaces for alignment
            printf(" ");
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)  // First element of each row is 1
                c = 1;
            else
                c = c * (i - j + 1) / j;  // Calculate binomial coefficient 
            printf("%d ", c);
        }
        printf("\n");
    }
    return 0;
}
// Output:
// Enter the number of rows: 5
//         1
//        1 1
//       1 2 1
//      1 3 3 1
//     1 4 6 4 1