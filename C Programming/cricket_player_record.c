#include<stdio.h>

struct Player
{
    char name[50];
    int century;
    float average;
    int age;
    int wickets;
    int runs;
};

int main()
{
    struct Player player[10];

    for(int i=0; i<10; i++)
    {
        printf("Enter details for player %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", player[i].name);
        printf("Age: ");
        scanf("%d", &player[i].age);
        printf("Runs: ");
        scanf("%d", &player[i].runs);
        printf("Wickets: ");
        scanf("%d", &player[i].wickets);
        printf("Average: ");
        scanf("%f", &player[i].average);
        printf("Century: ");
        scanf("%d", &player[i].century);
    }

    //Player with most runs
    int max_run = player[0].runs;
    int max_index = 0;
    for(int i=0; i<10; i++)
    {
        if(player[i].runs > max_run)
        {
            max_run = player[i].runs;
            max_index = i;
        }
    }
    printf("\nPlayer with most runs:\n");
    printf("Name: %s\n", player[max_index].name);

    //Player with most wickets
    int max_wicket = player[0].wickets;
    max_index = 0;
    for(int i=0; i<10; i++)
    {
        if(player[i].wickets > max_wicket)
        {
            max_wicket = player[i].wickets;
            max_index = i;
        }
    }
    printf("\nPlayer with most wickets:\n");
    printf("Name: %s\n", player[max_index].name);

    //Best batsman (average)
    float max_average = player[0].average;
    max_index = 0;
    for(int i=0; i<10; i++)
    {
        if(player[i].average > max_average)
        {
            max_average = player[i].average;
            max_index = i;
        }
    }
    printf("\nBest batsman (highest average):\n");
    printf("Name: %s\n", player[max_index].name);

    //Weakest Baller (min wickets)
    int min_wicket = player[0].wickets;
    int min_index = 0;
    for(int i=0; i<10; i++)
    {
        if(player[i].wickets < min_wicket)
        {
            min_wicket = player[i].wickets;
            min_index = i;
        }
    }
    printf("\nWeakest baller (least wickets):\n");
    printf("Name: %s\n", player[min_index].name);

    //Player with min century
    int min_century = player[0].century;
    min_index = 0;
    for(int i=0; i<10; i++)
    {
        if(player[i].century < min_century)
        {
            min_century = player[i].century;
            min_index = i;
        }
    }
    printf("\nPlayer with least centuries:\n");
    printf("Name: %s\n", player[min_index].name);

    //Player with max age
    int max_age = player[0].age;
    max_index = 0;
    for(int i=0; i<10; i++)
    {
        if(player[i].age > max_age)
        {
            max_age = player[i].age;
            max_index = i;
        }
    }
    printf("\nOldest player:\n");
    printf("Name: %s\n", player[max_index].name);

    return 0;
}