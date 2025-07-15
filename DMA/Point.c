#include<stdio.h>
#include<stdlib.h>

struct Point
{
    int x;
    int y;
};
typedef struct Point Point;

int main()
{
    Point *initial;
    Point *final;
    initial = (Point *) calloc(1, sizeof(Point));
    final = (Point *) calloc(1, sizeof(Point));

    if (initial == NULL || final == NULL) 
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the initial point (x y): ");
    scanf("%d %d", &initial->x, &initial->y);
    printf("Enter the final point (x y): ");
    scanf("%d %d", &final->x, &final->y);

    printf("Initial Point: (%d, %d)\n", initial->x, initial->y);
    printf("Final Point: (%d, %d)\n", final->x, final->y);

    free(initial);
    free(final);
    return 0;
}