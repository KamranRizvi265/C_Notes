#include<stdio.h>

int main()
{
    FILE *fp;
    // Open the file in write mode
    fp = fopen("kgcoding.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    char str[100];
    int i;
    // Read characters from input and write them to the file
    do
    {
        printf("Enter a sentence: ");
        scanf(" %[^\n]", str);
        // Write the string to the file
        fprintf(fp, "%s\n", str);
        printf("To exit press 1, else press 0.\n");
        scanf("%d", &i);
        getchar(); // Clear the newline character from the input buffer
    } while(i != 1);

    // Close the file
    fclose(fp);
    fp = NULL;
    printf("File written successfully.\n");

    return 0;
}