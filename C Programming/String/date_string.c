#include<stdio.h>

int main()
{
    char day[10];
    char month[15];
    int year;
    printf("Enter the day: ");
    scanf("%s", day);
    printf("Enter the month: ");
    scanf("%s", month);
    printf("Enter the year: ");
    scanf("%4d", &year);
    printf("The date is: %s/%s/%04d", day, month, year);

    return 0;
}