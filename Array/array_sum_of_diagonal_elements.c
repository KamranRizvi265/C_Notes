#include<stdio.h>

const int SIZE = 4;
int sum(int new_arr[][4], int SIZE);

int main()
{
    printf("Welcome to sum of Diagonal elements");
    int arr[4][4] = {{2,4,6,5},{1,3,4,5},{1,2,3,7},{2,5,3,4}};
    int add = sum(arr, SIZE);
    printf("\nSUM of diagonal elements is: %d",add);

    return 0;
}

int sum(int new_arr[][4], int SIZE)
{
    int right_ds = 0;
    int left_ds = 0;
    int total_ds = 0;
    for(int i=0; i<SIZE; i++)
    {
        left_ds = left_ds + new_arr[i][i];
        right_ds = right_ds + new_arr[i][SIZE - 1 - i];
    }
    total_ds = right_ds + left_ds;
    if(SIZE%2 == 1)
    {
        int index = SIZE/2;
        total_ds = total_ds - new_arr[index][index];
    }
    
    return total_ds;
}