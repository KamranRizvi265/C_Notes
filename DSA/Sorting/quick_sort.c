#include <stdio.h>

void traversal(int arr[], int n)
{
    printf("\nArray: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low+1;
    int j = high;
    int temp;

    do
    {
        while(arr[i]<=pivot)
        {
            i++;
        }

        while(arr[j]>pivot)
        {
            j--;
        }

        if(i<j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i<j);

    // Swap arr[j] and arr[low]
    temp = arr[j];
    arr[j] = arr[low];
    arr[low] = temp;

    return j;
}

void quick_sort(int arr[], int low, int high)
{
    int partitionIndex;

    if(low<high)
    {
        partitionIndex = partition(arr, low, high);
        quick_sort(arr, 0, partitionIndex-1);    // Sort left sub-array
        quick_sort(arr, partitionIndex+1, high); // Sort right sub-array
    }
}

int main()
{
    int arr[] = {3,5,2,13,12,3,2,13,45};
    int n = sizeof(arr)/sizeof(arr[0]);

    traversal(arr, n);
    quick_sort(arr, 0, n-1);
    traversal(arr, n);

    return 0;
}