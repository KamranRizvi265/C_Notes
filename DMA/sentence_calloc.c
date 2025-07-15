#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *sentence = (char *) calloc(30, sizeof(char));
    if(sentence == NULL)
    {
        printf("Memory allocation for sentence failed\n");
        return 1; // Exit the program if memory allocation fails
    }

    //Checking 0 initialization
    for(int i = 0; i<30; i++)
    {
        printf("%d", sentence[i]);
    }

    printf("\nEnter a sentence: ");
    scanf("%[^\n]", sentence);
    printf("You entered: %s\n", sentence);

    // Free the allocated memory
    free(sentence);
    sentence = NULL; // Set pointer to NULL after freeing

    return 0;
}