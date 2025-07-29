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
        printf("%d ", (a->ptr)[i]);
    }
}

void index_delete(struct myArray *a, int index)
{
    if(index < 0 || index >= a->used_size) // Check for valid index
    {
        printf("Invalid index. Cannot delete.\n");
        return;
    }

    // Shift elements to the left from the index
    for(int i = index; i < (a->used_size)-1; i++)
    {
        (a->ptr)[i] = (a->ptr)[i+1];
    }
    a->used_size--; // Decrease the used size after deletion
    printf("Element at index %d deleted successfully.\n", index);
}

int main()
{
    struct myArray marks;

    int t_size, u_size;
    printf("Enter total size of the array: ");
    scanf("%d", &t_size);
    printf("Enter used size of the array: ");
    scanf("%d", &u_size);

    if(u_size > t_size)
    {
        printf("Used size cannot be greater than total size.\n");
        return 1; // Exit if invalid sizes are provided
    }

    createArray(&marks, t_size, u_size);
    setval(&marks);
    showval(&marks);

    int index;
    printf("\nEnter index to delete: ");
    scanf("%d", &index);
    index_delete(&marks, index);
    showval(&marks);

    free(marks.ptr); // Free allocated memory

    return 0;
}