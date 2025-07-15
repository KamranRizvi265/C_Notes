#include<stdio.h>

int power(int n, int exp);

int main() 
{
    int n, sum = 0, temp, remainder, digits = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0) 
    {
        digits++;
        temp = temp/10;
    }

    temp = n;

    while (temp != 0) 
    {
        remainder = temp%10;
        sum = sum + power(remainder, digits);
        temp = temp/10;
    }

    if (n == sum)
    {
        printf("%d is an Armstrong number.\n", n);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", n);
    }

    return 0;
}

int power(int n, int exp) 
{
    int i, p = 1;

    for (i = 1; i <= exp; i++)
    {
        p = p*n;
    }

    return p;
}