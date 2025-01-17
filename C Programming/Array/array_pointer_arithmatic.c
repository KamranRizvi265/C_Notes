#include<stdio.h>

void print_arr(char *arr, int size);
void copy_arr(char *arr, int size, char *new_arr);

int main()
{
    char arr[6];
    char new_arr[6];
    int size = 6;
    printf("Enter characters of an array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%c", &arr[i]);
    }

    printf("Array before copy: ");
    print_arr(arr, size);
    printf("Array after copy: ");
    copy_arr(arr, size, new_arr);
    print_arr(new_arr, size);

    return 0;
}

void copy_arr(char *arr, int size, char *new_arr)
{
    for(int i=0; i<size; i++)
    {
        *(new_arr + i) = *(arr + i);
    }
}

void print_arr(char *arr, int size)
{
    for(int i=0; i<size; i++)
    {
        printf(" %c", *(arr + i));
    }
    printf("\n");
}