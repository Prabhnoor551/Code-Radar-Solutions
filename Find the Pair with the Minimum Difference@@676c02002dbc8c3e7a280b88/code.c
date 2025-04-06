#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b); // Compare function for sorting
}

int main() {
    int n;
    scanf("%d", &n);  // Input the size of the array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Input the elements of the array
    }

    if (n < 2) {
        printf("-1\n");
        return 0;
    }

    // Sort the array to ensure the smallest difference is between consecutive elements
    qsort(arr, n, sizeof(int), compare);

    // Initialize the minimum difference to a large number
    int min_diff = abs(arr[1] - arr[0]);
    int pair1 = arr[0], pair2 = arr[1];

    // Compare consecutive pairs for the smallest difference
    for (int i = 1; i < n - 1; i++) {
        int diff = abs(arr[i + 1] - arr[i]);
        if (diff < min_diff) {
            min_diff = diff;
            pair1 = arr[i];
            pair2 = arr[i + 1];
        }
    }

    // Output the pair with the minimum difference
    printf("%d %d", pair1, pair2);
    return 0;
}



