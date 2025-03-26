#include<stdio.h>
#include<string.h>

void trim_string(char str[100], char trimmed_str[100]);

int main()
{
    char str[100];
    char trimmed_str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    trim_string(str, trimmed_str);
    printf("Trimmed string: %s", trimmed_str);

    return 0;
}

void trim_string(char str[100], char trimmed_str[100])
{
    int size = strlen(str);
    int start = 0;
    int end = size - 1;
    int i, j;
    while(str[start] == ' ')  //Remove leading spaces
    {
        start++;
    }
    while(str[end] == ' ' || str[end] == '\n')  //Remove trailing spaces and newline character
    {
        end--;
    }
    for(i = start, j = 0; i <= end; i++)  //Copy the trimmed string
    {
        trimmed_str[j] = str[i];
        j++;
    }
    trimmed_str[j] = '\0';
}