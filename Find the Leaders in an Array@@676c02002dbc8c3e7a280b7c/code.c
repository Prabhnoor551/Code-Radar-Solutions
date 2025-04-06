#include <stdio.h>
#include <stdlib.h>

// Comparison function for sorting in descending order
int compare(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);  // For descending order
}

void findLeaders(int arr[], int n) {
    // If the array is empty, return
    if (n == 0) {
        return;
    }

    // Temporary array to store the leaders
    int leaders[n];
    int leaderCount = 0;

    // The rightmost element is always a leader
    int max_from_right = arr[n - 1];
    leaders[leaderCount++] = max_from_right;  // Add the last element as a leader

    // Traverse the array from second last element to the first element
    for (int i = n - 2; i >= 0; i--) {
        // If the current element is greater than or equal to max_from_right
        if (arr[i] >= max_from_right) {
            leaders[leaderCount++] = arr[i];  // Add it to leaders
            max_from_right = arr[i];  // Update the max_from_right
        }
    }

    // Sort the leaders array in descending order
    qsort(leaders, leaderCount, sizeof(int), compare);

    // Print the leaders
    for (int i = 0; i < leaderCount; i++) {
        printf("%d ", leaders[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);  // Input the size of the array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Input the elements of the array
    }

    findLeaders(arr, n);  // Call function to find and print leaders

    return 0;
}

