#include<stdio.h>

void reverse(int arr[], int size, int reverse_arr[]);
void print_reverse(int reverse_arr[], int size);

int main()
{
    int arr[6];
    int size = 6;
    int reverse_arr[6];
    
    printf("Enter 6 elements of an array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    reverse(arr, size, reverse_arr);
    printf("Reverse is:");
    print_reverse(reverse_arr, size);
    
    return 0;
}

void reverse(int arr[], int size, int reverse_arr[])
{
    for(int i=0, j=size-1; i<size; i++, j--)
    {
        reverse_arr[j] = arr[i];
    }
}

void print_reverse(int reverse_arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        printf(" %d", reverse_arr[i]);
    }
    printf("\n");
}