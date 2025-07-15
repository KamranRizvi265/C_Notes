#include<stdio.h>

int main()
{
    int arr1[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int arr2[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int merged_arr[20];
    int i, j, k;
    i = j = k = 0;
    while(k<20)
    {
        if(i<10)
        {
            merged_arr[k] = arr1[i];
            i++;
        }
        else
        {
            merged_arr[k] = arr2[j];
            j++;
        }
        k++;
    }
    printf("Merged array: ");
    for(i=0; i<20; i++)
    {
        printf("%d ", merged_arr[i]);
    }
    return 0;
}