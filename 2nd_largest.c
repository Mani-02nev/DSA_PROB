#include <stdio.h>
#include <limits.h> // For INT_MIN (smallest possible integer)

// Function to find the second largest element efficiently
int findSecondLargest(int arr[], int n) {
    if (n < 2) return -1; // Not enough elements

    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++) {
        // If current element is greater than first
        if (arr[i] > first) {
            second = first;  // Update second
            first = arr[i];  // Update first
        }
        // If current element is in between first and second
        else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    // Return -1 if no second largest found
    return (second == INT_MIN) ? -1 : second;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array Elements: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    int second = findSecondLargest(arr, n);

    if (second == -1)
        printf("\nNo Second Largest Element Found (all same numbers)\n");
    else
        printf("\nSecond Largest Element = %d\n", second);

    return 0;
}
