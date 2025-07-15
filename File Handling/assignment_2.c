#include<stdio.h>

int main()
{
    FILE *fp;
    //Opening file in read mode
    fp = fopen("assignment_2.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    int sum = 0, num;
    // Reading integers from the file and calculating the sum
    while( fscanf(fp, "%d", &num) == 1)
    {
        sum = sum + num;
    }

    printf("Sum of integers in the file: %d\n", sum);
    // Closing the file
    fclose(fp);
    fp = NULL;
    printf("File closed successfully.\n");

    return 0;
}