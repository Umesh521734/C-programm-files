#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Read size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Array declaration

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Display result
    printf("Sum of array elements = %d\n", sum);

    return 0;
}

