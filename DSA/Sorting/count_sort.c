#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void traversal(int A[],int n)
{
    printf("\nArray: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", A[i]);
    }
}

int maximum(int A[], int n)
{
    int max = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(max < A[i])
        {
            max = A[i];
        }
    }
    return max;
}

void count_sort(int A[], int n)
{
    int i=0,j=0;
    
    // Find maximum element in A
    int max = maximum(A,n);

    // Create the count array
    int *count = (int*) malloc((max+1) * sizeof(int));

    // Initialize the count array to zero
    for(i=0; i< max+1; i++)
    {
        count[i] = 0;
    }

    // Increment the corresponding element in the array
    for(i=0; i<n; i++)
    {
        count[A[i]] = count[A[i]] + 1;
    }

    i=0,j=0;

    while(i<=max)
    {
        if(count[i]>0)
        {
            A[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int A[] = {7,15,2,8,10,15,7,9};
    int n = sizeof(A)/sizeof(A[0]);

    traversal(A, n);
    count_sort(A, n);
    traversal(A, n);

    return 0;
}