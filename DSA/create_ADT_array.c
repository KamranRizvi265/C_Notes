#include<stdio.h>
#include<stdlib.h>

struct myArray
{
    int total_size; // Total size of the array
    int used_size;  // Number of elements currently used
    int *ptr;       // Pointer to the array
};

void createArray(struct myArray *a, int tsize, int usize)
{
    printf("Creating Array\n");

    // (*a).total_size = tsize;
    // (*a).used_size = usize;
    // (*a).ptr = (int *) malloc(tsize * sizeof(int));

    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int *) malloc(tsize * sizeof(int));
}

void setval(struct myArray *a)
{
    printf("\nSetting Value\n");
    int n;
    for(int i = 0; i < a->used_size; i++)
    {
        printf("Enter element %d: ",i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}

void showval(struct myArray *a)
{
    printf("\nShowing Values\n");
    for(int i=0; i< a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
}

int main()
{
    struct myArray marks;
    createArray(&marks, 10, 3);
    setval(&marks);
    showval(&marks);
    return 0;
}