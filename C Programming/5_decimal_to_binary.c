#include<stdio.h>

int main() 
{
    int n, i;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    int binary[64];
    for(i = 0; n > 0; i++) 
    {
        binary[i] = n % 2;
        n = n / 2;
    }
    printf("Binary: ");
    for(i = i - 1; i >= 0; i--) 
    {
        printf("%d", binary[i]);
    }

    return 0;
}