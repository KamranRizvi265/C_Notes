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

void linear_search(struct myArray *a, int value)
{
    printf("\nSearching for value %d\n",value);
    int index = -1;
    for(int i=0; i < a->used_size; i++)
    {
        if((a->ptr)[i] == value)
        {
            index = i;
            break;
        }
    }
    if (index != -1)
    {
        printf("Value %d found at index %d\n", value, index);
    }
    else
    {
        printf("Value %d not found in the array\n", value);
    }
}

int main()
{
    struct myArray marks;

    createArray(&marks, 10, 5);
    setval(&marks);
    showval(&marks);

    int value;
    printf("\nEnter value to search: ");
    scanf("%d", &value);

    linear_search(&marks, value);

    // Free allocated memory
    free(marks.ptr);
    return 0;
}