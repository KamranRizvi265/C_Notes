#include<stdio.h>

int search(int arr[][3], int row, int col, int num);

int main()
{
    printf("Welcome to searching element in 2D array\n");
    int arr[4][3] = {{1,3,5},{2,4,6},{1,2,3},{5,2,8}};
    int num;
    printf("Enter the number to be searched: ");
    scanf(" %d", &num);
    int occ =  search(arr, 4, 3, num);
    printf("\n%d found %d times",num, occ);

    return 0;
}

int search(int arr[][3], int row, int col, int num)
{
    int count = 0;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j <col; j++)
        {
            if(arr[i][j] == num)
            {
                count++;
            }
        }
    }
    return count;
}