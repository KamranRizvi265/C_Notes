#include<stdio.h>

void traversal(int arr[], int n)
{
    printf("\nArray: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void bubble_sort(int arr[], int n)
{
    printf("\nBubble Sort");
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// This sorting is used when the array is nearly sorted to reduce the time complexity
void bubble_sort_adaptive(int arr[], int n)  // adaptive version
{
    printf("\nAdaptive Bubble Sort");
    int isSorted = 0;
    for(int i=0; i<n-1; i++)
    {
        isSorted = 1; // assuming the array is sorted
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isSorted = 0; // we found a pair that is out of order
            }
        }
        if(isSorted)
        {
            return; // array is sorted, exit early
        }
    }
}

int main()
{
    // int arr[] = {7, 11, 9, 2, 17, 4};
    // int arr[] = {1, 2, 3, 4, 5, 6};
    int arr[] = {1, 2, 3, 4, 5, 54, 6, 23, 100, 45, 678};
    int n = sizeof(arr)/sizeof(arr[0]);

    traversal(arr, n);
    // bubble_sort(arr, n);
    // traversal(arr, n);

    bubble_sort_adaptive(arr, n);
    traversal(arr, n);

    return 0;
}