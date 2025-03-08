#include<stdio.h>

int main()
{
    char str[100];
    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);
    printf("You entered:");
    puts(str);
    
    return 0;
}