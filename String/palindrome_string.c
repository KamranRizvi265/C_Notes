#include<stdio.h>
#include<string.h>

void reverse_string(char str[100], char reverse_arr[100]);

int main()
{
    char str[100];
    char reverse_arr[100];
    printf("Enter a string: ");
    scanf("%s", str);   //Input a string
    reverse_string(str, reverse_arr);  //Reverse the string
    printf("Reverse of the string: %s", reverse_arr);   //Print the reversed string

    if(strcmp(str, reverse_arr) == 0)  //Check if the string is palindrome
    {
        printf("\n%s is a palindrome string", str);
    }
    else
    {
        printf("\n%s is not a palindrome string", str);
    }

    return 0;
}

void reverse_string(char str[100], char reverse_arr[100])
{
    int i, j;
    int size = strlen(str);
    for(i=0,j= size-1; i<size; i++, j--)  //Reverse the string
    {
        reverse_arr[j] = str[i];
    }
    reverse_arr[i] = '\0';
}