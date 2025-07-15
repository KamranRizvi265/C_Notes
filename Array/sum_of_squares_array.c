#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[2*n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += arr[i]*arr[i];
    }
    printf("The sum of squares of the elements of the array is: %d", sum);
    return 0;
}