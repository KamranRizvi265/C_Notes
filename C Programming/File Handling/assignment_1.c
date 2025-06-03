#include<stdio.h>

int main()
{
    FILE *fp;
    printf("Enter the name of the file to open: ");
    char filename[100];
    scanf("%[^\n]", filename); // Read the filename including spaces
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    else
    {
        printf("File opened successfully.\n");
    }

    fclose(fp);
    fp = NULL;
    printf("File closed successfully.\n");
    
    return 0;
}