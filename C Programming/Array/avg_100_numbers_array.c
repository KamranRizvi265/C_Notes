#include<stdio.h>

int main()
{
    float arr[100];
    printf("Enter 100 numbers: ");
    for(int i=0; i<100; i++)
    {
        scanf("%f", &arr[i]);
    }
    float sum = 0;
    for(int i=0; i<100; i++)
    {
        sum += arr[i];
    }
    float avg = sum/100;
    printf("The average of the 100 numbers is: %f", avg);

    return 0;
}