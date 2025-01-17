#include<stdio.h>

void merge(int arr_1[], int arr_2[], int size1,int size2,int size3, int merged_arr[]);
void print_arr(int merged_arr[], int new_size);

int main()
{
    int arr_1[6];
    int arr_2[4];
    int merged_arr[10];
    printf("Enter 6 elements of array 1 in increasing order: ");
    for(int i=0; i<6; i++)
    {
        scanf(" %d", &arr_1[i]);
    }
    printf("Enter 4 elements of array 2 in increasing order: ");
    for(int i=0; i<4; i++)
    {
        scanf(" %d", &arr_2[i]);
    }
    printf("Merged array is: ");
    merge(arr_1, arr_2, 6,4,10, merged_arr);
    print_arr(merged_arr, 10);

    return 0;
}

void merge(int arr_1[], int arr_2[], int size1, int size2,int size3, int merged_arr[])
{
    int i=0,j=0,k=0;
    while(k<size3)
    {
        if(j == size2 || (i<size1 && arr_1[i] < arr_2[j]) )
        {
            merged_arr[k] = arr_1[i++];
        }
        else
        {
            merged_arr[k] = arr_2[j++];
        }



        k++;
    }
    
}

void print_arr(int merged_arr[], int new_size)
{ 
    for(int i=0; i<new_size; i++)
    {
        printf(" %d", merged_arr[i]);
    }
}