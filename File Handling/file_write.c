#include<stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("writing.txt", "w"); // Use of "w" mode to overwrite the file and use "a" mode to append to the file
    // If the file does not exist, it will be created
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    // Write to the file by overwriting it
    fprintf(fp, "Hello, World!\n");
    fprintf(fp, "Square of %d is %d\n", 3, 9);

    fclose(fp);
    fp = NULL;

    return 0;
}

/*NOTE:- 1) "r+" is use for reading and writing, if file does not exist it will return NULL
         2) "w+" is used for reading and writing by overwriting file, if file does not exist it will create new file
         3) "a+" is used for reading and appending, if file does not exist it will create new file */
