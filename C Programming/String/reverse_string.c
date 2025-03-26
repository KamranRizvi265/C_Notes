#include<stdio.h>
#include<string.h>

void reverse_string(char str[100], char reverse_arr[100]);

int main()
{
    char str[100];
    char reverse_arr[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    reverse_string(str, reverse_arr);  //Reverse the string
    printf("Reverse of the string: ");
    printf("%s", reverse_arr);         //Print the reversed string

    return 0;
}

void reverse_string(char str[100], char reverse_arr[100])
{
    int i, j;
    int size = strlen(str);
    for(i=0,j= size-2; i<size-1; i++, j--)  //size-2 to exclude the newline character
    {
        reverse_arr[j] = str[i];
    }
    reverse_arr[i] = '\0';
}