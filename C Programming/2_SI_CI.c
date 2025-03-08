#include<stdio.h>
#include<math.h>

int main()
{
    float p, r, t, si, ci;
    printf("Enter the principal amount: ");
    scanf("%f", &p);
    printf("Enter the rate of interest: ");
    scanf("%f", &r);
    printf("Enter the time period: ");
    scanf("%f", &t);
    si = (p*r*t)/100;
    ci = p * (pow((1 + r/100), t) - 1);
    printf("Simple Interest: %f\n", si);
    printf("Compound Interest: %f\n", ci);

    return 0;
}