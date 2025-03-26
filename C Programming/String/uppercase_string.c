#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')  //Check if the character is lowercase
        {
            str[i] = str[i] - 32;           //Convert lowercase to uppercase
        }
    }
    printf("Uppercase string: %s", str);

    return 0;
}