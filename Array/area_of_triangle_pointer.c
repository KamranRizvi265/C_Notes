#include<stdio.h>

int main()
{
    float base, height, area;
    float *b, *h, *a;
    b = &base;
    h = &height;
    a = &area;

    printf("Enter base of the triangle: ");
    scanf("%f", b);
    printf("Enter height of the triangle: ");
    scanf("%f", h);

    *a = 0.5 * (*b) * (*h);

    printf("Area of the triangle = %f\n", *a);

    return 0;
}