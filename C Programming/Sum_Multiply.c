#include<stdio.h>

int main()
{
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    int sum = num1 + num2;
    int product = num1 * num2;
    printf("Sum = %d, Product = %d",sum,product);

    return 0;
}