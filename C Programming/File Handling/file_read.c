#include<stdio.h>

int main()
{
    FILE *fp;
    char line[1000];
    // Open the file in read mode
    fp = fopen("kgcoding.text","r");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    // Read and print the contents of the file only one line usinf fgets
    fgets(line, sizeof(line),fp);
    printf("File contents: %s\n", line);

    // Using fgets to read the whole file line by line using fgets
    // while (fgets(file, sizeof(file), fp) != NULL)
    // {
    //     printf("%s", file);
    // }

    // Read and print the contents of the file using fgetc
    // char c;
    // do
    // {
    //     c = fgetc(fp);
    //     printf("%c", c);
    // } while (c != EOF);

    // Close the file
    fclose(fp);
    fp = NULL;
    return 0;
}