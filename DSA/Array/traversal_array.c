#include<stdio.h>
#include<stdlib.h>

struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};

void create_array(struct myArray *a, int tsize, int usize)
{
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int *) malloc(tsize * sizeof(int));
}

void traversal_store(struct myArray *a)
{
    printf("\nStoring elements\n");
    for(int i=0; i < a->used_size; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &(a->ptr[i]));
    }
}

void traversal_print(struct myArray *a)
{
    printf("\nPrinting elements\n");
    for(int i=0; i< a->used_size; i++)
    {
        printf("%d ", (a->ptr[i]));
    }
}

int main()
{
    struct myArray arr;
    create_array(&arr, 10, 3);
    traversal_store(&arr);
    traversal_print(&arr);
    return 0;
}