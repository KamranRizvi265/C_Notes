#include <stdio.h>
#define SIZE 8

void traversal(int A[])
{
    printf("\nArray: ");
    for(int i=0; i<SIZE; i++)
    {
        printf("%d ", A[i]);
    }
}

void merge(int A[], int low, int mid, int high)
{
    int i=low, j=mid+1, k=low, B[SIZE];
    
    while(i<=mid && j<=high)
    {
        if(A[i]<A[j])
        {
            B[k] = A[i];
            i++,k++;
        }
        else
        {
            B[k] = A[j];
            j++,k++;
        }
    }

    while(i<=mid)
    {
        B[k] = A[i];
        i++,k++;
    }

    while(j<=high)
    {
        B[k] = A[j];
        j++,k++;
    }

    for(int i=low; i<=high; i++)
    {
        A[i] = B[i];
    }
}

void merge_sort(int A[], int low, int high)
{
    int mid;
    if(low < high)
    {
        mid = (low + high) /2;
        merge_sort(A, low, mid);
        merge_sort(A, mid+1, high);
        merge(A, low, mid, high);
    }
}

int main()
{
    int A[] = {7,15,2,8,10,15,7,9};
    traversal(A);
    merge_sort(A, 0, SIZE-1);
    traversal(A);

    return 0;
}