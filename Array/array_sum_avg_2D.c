#include<stdio.h>

int sum(int new_arr[][2], int row, int col);
int average(int new_arr[][2], int row, int col);

int main()
{
    printf("Welcome to Sum and Average of 2D array\n");
    int arr[2][2] = {{2,4},{1,3}};
    int add = sum(arr,2,2);
    printf("SUM is: %d",add);
    int avg = average(arr,2,2);
    printf("\nAverage is: %d", avg);

    return 0;
}

int sum(int new_arr[][2], int row, int col)
{
    int add = 0;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            add = add + new_arr[i][j];
        }
    }
    return add;
}

int average(int new_arr[][2], int row, int col)
{
    int add = sum(new_arr, row, col);
    int avg = add/(row*col);
    return avg;
}