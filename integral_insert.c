#include <stdio.h>

int main() {
    int arr[100], n, i, pos, value;

    // Input array size
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input value and position to insert
    printf("Enter the position to insert (0 to %d): ", n);
    scanf("%d", &pos);
    printf("Enter the value to insert: ");
    scanf("%d", &value);

    // Shift elements to the right
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the value
    arr[pos] = value;
    n++;  // Increase array size

    // Display updated array
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}