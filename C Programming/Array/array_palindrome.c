#include<stdio.h>

void reverse(int arr[], int size, int reverse_arr[]);
void is_palindrome(int arr[], int reverse_arr[], int size);

int main()
{
    int arr[6];
    int size = 6;
    int reverse_arr[6];
    
    printf("Enter elements of an array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    reverse(arr, size, reverse_arr);
    is_palindrome(arr, reverse_arr, size);
    
    
    return 0;
}

void reverse(int arr[], int size, int reverse_arr[])
{
    for(int i=0, j=size-1; i<size; i++, j--)
    {
        reverse_arr[j] = arr[i];
    }
}

void is_palindrome(int arr[], int reverse_arr[], int size)
{
    int count = 0;
    for(int i=0; i<size; i++)
    {
        if(arr[i] == reverse_arr[i])
        {
            count = 1;
        }
        else
        {
            count = 0;
            break;
        }
    }
    if(count == 1)
    {
        printf("The array is palindrome");
    }
    else
    {
        printf("The array is not palindrome");
    }
}