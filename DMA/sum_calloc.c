#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size;
    int *arr;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    // Allocate memory for the array using malloc
    arr = (int *)calloc(size, sizeof(int));
    if(arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1; // Exit the program if memory allocation fails
    }

    int sum = 0;
    // Input elements into the array
    for(int i = 0; i<size; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i]; // Calculate the sum of the elements
    }

    // Print the sum of the elements
    printf("The sum of the elements is: %d\n", sum);
    // Free the allocated memory
    free(arr);
    arr = NULL; // Set pointer to NULL after freeing memory
    return 0;
}