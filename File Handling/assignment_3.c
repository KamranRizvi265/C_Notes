#include<stdio.h>

int main()
{
    FILE *f1 , *f2;
    // Open the first file in read + writing mode
    f1 = fopen("kgcoding.txt", "r");
    f2 = fopen("writing.txt", "w");
    if (f1 == NULL || f2 == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    char ch;
    // Read characters from the first file and write them to the second file
    while( (ch = fgetc(f1)) != EOF)
    {
        fprintf(f2, "%c", ch);
    }

    // Close the files
    fclose(f1);
    fclose(f2);
    f1 = NULL;
    f2 = NULL;
    printf("File copied successfully.\n");

    return 0;
}