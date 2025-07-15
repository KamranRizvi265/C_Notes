#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char subjects[5][20] = {"Math", "Physics", "Chemistry", "Biology", "English"};
    float marks[5];
    float percentage[5];
    printf("Enter the marks of 5 subjects:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%s: ", subjects[i]);    // Prompt for each subject
        scanf("%f", &marks[i]);
        percentage[i] = marks[i];      // Assuming each subject is out of 100
    }

    printf("\nReport Card:\n");
    printf("%-15s%-10s%-15s%-10s\n", "Subject", "Marks", "Percentage", "Division");
    for(i = 0; i < 5; i++)
    {
        char division[10];
        if(percentage[i] >= 60)
            strcpy(division, "I Div");  
        else if(percentage[i] >= 45 && percentage[i] < 60)
            strcpy(division, "II Div");
        else if(percentage[i] >= 35 && percentage[i] < 45)
            strcpy(division, "III Div");
        else if(percentage[i] < 35)
            strcpy(division, "Fail");
        else
            strcpy(division, "Invalid");
            
        printf("%-15s%-10.2f%-15.2f%-10s\n", subjects[i], marks[i], percentage[i], division);
    }

    return 0;
}