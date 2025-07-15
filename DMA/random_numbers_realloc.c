#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *arr = (int *) calloc(10, sizeof(int));
    if (arr == NULL) 
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter 10 integers: ");
    for (int i = 0; i < 10; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Reallocate memory to hold 5 integers
    arr = (int *) realloc(arr, 5 * sizeof(int));
    if (arr == NULL) 
    {
        printf("Memory reallocation failed\n");
        return 1;
    }

    printf("After reallocating, the first 5 integers are: ");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // Free the allocated memory
    free(arr);

    return 0;
}