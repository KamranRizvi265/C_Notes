#include<stdio.h>

int main()
{
    int i, j, temp;
    int arr[20];
    printf("Enter the elements: ");
    for(i=0; i<20; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<20; i++)
    {
        for(j=i+1; j<20; j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for(i=0; i<20; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}