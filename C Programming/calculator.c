#include<stdio.h>

int main()
{
    int a, b;
    char op;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the operator: ");
    scanf(" %c", &op);
    printf("Enter the second number: ");
    scanf("%d", &b);

    switch(op)
    {
        case '+':
            printf("The sum of %d and %d is %d\n", a, b, a+b);
            break;
        case '-':
            printf("The difference of %d and %d is %d\n", a, b, a-b);
            break;
        case '*':
            printf("The product of %d and %d is %d\n", a, b, a*b);
            break;
        case '/':
            printf("The division of %d and %d is %d\n", a, b, a/b);
            break;
        default:
            printf("Invalid operator\n");
    }
    return 0;
}