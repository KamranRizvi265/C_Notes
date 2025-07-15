#include<stdio.h>
#include<string.h>

struct Car
{
    char name[20];
    char model[20];
    int year;
};

typedef struct Car Car;

void input_cars(Car *cars, int i);
void print_cars(Car *cars);

int main()
{
    Car cars[3];
    for(int i = 0; i < 3; i++)
    {
        printf("Enter details for car %d:\n", i + 1);
        input_cars(&cars[i], i);
    }
    
    for(int i = 0; i < 3; i++)
    {
        print_cars(&cars[i]);
    }

    return 0;
}

void input_cars(Car *cars, int i)
{
    printf("Enter name of car %d: ", i + 1);
    scanf(" %[^\n]", &(cars->name));
    printf("Enter model of car %d: ", i + 1);
    scanf(" %[^\n]", &(cars->model));
    printf("Enter year of car %d: ", i + 1);
    scanf("%d", &(cars->year));
}

void print_cars(Car *cars)
{
    printf("Name: %s\n", cars->name);
    printf("Model: %s\n", cars->model);
    printf("Year: %d\n", cars->year);
}