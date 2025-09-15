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

    if (a->ptr == NULL) 
    {
        printf("Memory allocation failed!\n");
        exit(1); // Exit if memory allocation fails
    }
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
        printf("%d ", (a->ptr)[i]);
    }
    printf("\n");
}

void insert(struct myArray *a, int index, int value)
{
    if(a->used_size >= a->total_size)    // Check if the array is full
    {   
        printf("Array is full. Cannot insert.\n");
        return;
    }
    if(index < 0 || index > a->used_size)  // Check for valid index
    {
        printf("Invalid index.\n");
        return;
    }

    printf("\nInserting Value\n");

    for(int i = (a->used_size); i > index; i--)
    {
        (a->ptr)[i] = (a->ptr)[i-1];
    }
    (a->ptr)[index] = value;
    a->used_size++;   // Increment the used size after insertion

    printf("Value %d inserted at index %d\n", value, index);
}
 
int main()
{
    struct myArray marks;
    createArray(&marks, 10, 6);
    setval(&marks);
    showval(&marks);

    int index, value;
    printf("Enter index to insert at: ");
    scanf("%d", &index);
    printf("Enter value to insert: ");
    scanf("%d", &value);

    insert(&marks, index, value);
    showval(&marks);

    free(marks.ptr); // Free the allocated memory

    return 0;
}