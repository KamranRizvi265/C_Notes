#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n], i;
    for(i=0;i<n;i++)
    {
        printf("Enter the value of arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("The values of the array are:\n");
    for(i=0;i<n;i++)
    {
        printf("The value of arr[%d] is %d\n",i,arr[i]);
    }
    return 0;
}