#include<stdio.h>

void traversal(int arr[], int n)
{
    printf("\nArray: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void selection_sort(int arr[], int n)
{
    int indexOfMin, temp;

    for(int i = 0; i < n-1; i++)
    {
        indexOfMin = i;
        for(int j = i+1; j < n; j++)
        {
            if(arr[j] < arr[indexOfMin])
            {
                indexOfMin = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[indexOfMin];
        arr[indexOfMin] = temp;
    }
    printf("\nSorted...");
}

int main()
{
    int arr[] = {8,0,7,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    traversal(arr, n);
    selection_sort(arr, n);
    traversal(arr, n);

    return 0;
}