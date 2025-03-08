#include<stdio.h>

int main()
{
    int i;
    int arr[10], max;

    // Store number entered by the user
    for(i = 0; i < 10; i++)
    {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Assume first element as maximum
    max = arr[0];

    // Find maximum element in the array
    for(i = 1; i < 10; i++)
    {
        // Change max if current element is greater than max
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Largest element = %d", max);

    return 0;
}