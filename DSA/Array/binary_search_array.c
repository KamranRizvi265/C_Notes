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
        printf("%d ", (a->ptr)[i]);
    }
}

void binary_search(struct myArray *a, int value)
{
    printf("\nSearching for value %d\n", value);

    int low=0;
    int high = (a->used_size) -1;
    int mid;

    while(low<=high)
    {
        mid = (low + high) / 2;
        if( (a->ptr)[mid] == value)
        {
            printf("Value %d found at index %d\n", value, mid);
            return;
        }
        if( (a->ptr)[mid] < value)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    printf("Value %d not found in the array\n", value);
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

    binary_search(&marks, value);

    // Free allocated memory
    free(marks.ptr);
    return 0;
}