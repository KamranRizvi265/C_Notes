#include<stdio.h>

void traversal(int arr[], int n)
{
    printf("\nArray: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void insertion_sort(int arr[], int n)
{
    int key, j;
    for(int i = 1; i <= n-1; i++)
    {
        key = arr[i];
        j = i - 1;
        while(j >= 0 && (arr[j] > key))
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main()
{
    int arr[] = {7, 11, 9, 2, 17, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    traversal(arr, n);
    insertion_sort(arr, n);
    traversal(arr, n);

    return 0;
}