#include<stdio.h>
#include<stdlib.h>

struct Car
{
    char *name;
    int year;
    float price;
};

int main()
{
    struct Car car;
    // Allocate memory for the car structure
    car.name = (char *) calloc(50, sizeof(char));
    if(car.name == NULL)
    {
        printf("Memory allocation for car name failed\n");
        return 1; // Exit the program if memory allocation fails
    }
    
    printf("Enter car name: ");
    scanf("%[^\n]", car.name);
    printf("Enter car year: ");
    scanf("%d", &car.year);
    printf("Enter car price: ");
    scanf("%f", &car.price);

    printf("\nCar Details:\n");
    printf("Name: %s\n", car.name);
    printf("Year: %d\n", car.year);
    printf("Price: %.2f\n", car.price);

    return 0;
}