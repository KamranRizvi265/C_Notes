#include<stdio.h>

int sum(int a, int b) 
{
    return a + b;
}

int subtract(int a, int b) 
{
    return a - b;
}

int product(int a, int b) 
{
    return a * b;
}

int main() 
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("Sum: %d\n", sum(a, b));
    printf("Difference: %d\n", subtract(a, b));
    printf("Product: %d\n", product(a, b));

    return 0;
}