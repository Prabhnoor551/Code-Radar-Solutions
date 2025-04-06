#include <stdio.h>
#include <stdlib.h>  // For qsort

// Comparison function for sorting in ascending order
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void findLongestConsecutiveSequence(int arr[], int n) {
    if (n == 0) {
        printf("No elements in the array.\n");
        return;
    }

    // Sort the array
    qsort(arr, n, sizeof(int), compare);

    int maxLength = 1;    // The length of the longest consecutive sequence
    int currentLength = 1; // The length of the current consecutive sequence

    for (int i = 1; i < n; i++) {
        // If the current element is the next consecutive element
        if (arr[i] == arr[i - 1] + 1) {
            currentLength++;  // Increment the current sequence length
        } else if (arr[i] != arr[i - 1]) {
            // If the current element is not consecutive, reset the current sequence length
            currentLength = 1;
        }

        // Update maxLength if we found a longer consecutive sequence
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    printf("The length of the longest consecutive sequence is: %d\n", maxLength);
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

    // Find the longest consecutive sequence
    findLongestConsecutiveSequence(arr, n);

    return 0;
}
