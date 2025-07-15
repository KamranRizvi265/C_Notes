#include<stdio.h>
#include<stdlib.h>

int main()
{
    // Allocate memory for the array using calloc
    int *arr = (int *)calloc(2, sizeof(int));
    if(arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1; // Exit the program if memory allocation fails
    }
    arr[0] = 10;
    arr[1] = 20;
    printf("Initial array: %d, %d\n", arr[0], arr[1]);

    arr = (int *) realloc(arr, 3 * sizeof(int));
    if(arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1; // Exit the program if memory allocation fails
    }
    arr[2] = 30;
    printf("Array after realloc: %d, %d, %d\n", arr[0], arr[1], arr[2]);

    // Free the allocated memory
    free(arr);
    arr = NULL; // Set pointer to NULL after freeing memory
    return 0;
}