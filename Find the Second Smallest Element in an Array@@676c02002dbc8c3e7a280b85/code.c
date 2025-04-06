#include <stdio.h>
#include <limits.h>  // For INT_MAX

int findSecondSmallest(int arr[], int n) {
    // Handle edge case where array has fewer than 2 elements
    if (n < 2) {
        return -1;  // No second smallest element
    }

    int smallest = INT_MAX;
    int second_smallest = INT_MAX;

    // Traverse the array to find the smallest and second smallest
    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            second_smallest = smallest;  // Update second smallest
            smallest = arr[i];           // Update smallest
        } else if (arr[i] < second_smallest && arr[i] != smallest) {
            second_smallest = arr[i];    // Update second smallest
        }
    }

    // If no second smallest element was found (e.g., all elements are the same)
    if (second_smallest == INT_MAX) {
        return -1;
    }

    return second_smallest;
}

int main() {
    int n;

    // Input the size of the array
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the second smallest element
    int result = findSecondSmallest(arr, n);

    if (result != -1) 
    {
        printf("%d ", result);
    }

    return 0;
}
