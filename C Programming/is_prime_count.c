#include <stdio.h>

int main() {
    int n, count = 0;
    
    // Input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        int isPrime = 1;
        if (i < 2)
        {
            isPrime = 0;
        }
        for (int j = 2; j<= i/2; j++)
        {
            if (i % j == 0) 
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) 
        {
            printf("%d ", i);
            count++;
        }
    }
    
    printf("\nTotal prime numbers: %d", count);
    
    return 0;
}