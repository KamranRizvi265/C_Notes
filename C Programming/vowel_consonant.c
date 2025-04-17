#include<stdio.h>

int main()
{
    char name[50];
    int i, vowels = 0, consonants = 0;
    printf("Enter a string: ");
    fgets(name, sizeof(name), stdin); // Read a string from the user

    // Loop through each character in the string
    for(i = 0; name[i] != '\0'; i++)
    {
        // Check if the character is a vowel
        if(name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' ||
           name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U')
        {
            vowels++;
        }
        // Check if the character is a consonant
        else if((name[i] >= 'a' && name[i] <= 'z') || (name[i] >= 'A' && name[i] <= 'Z'))
        {
            consonants++;
        }
        else
        {
            // Ignore non-alphabetic characters
            continue;
        }
    }

    // Print the results
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}