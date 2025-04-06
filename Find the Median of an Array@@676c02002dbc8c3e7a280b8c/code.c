#include <stdio.h>
#include <stdlib.h>

// Comparison function for sorting
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

double findMedian(int arr[], int n) {
    // Sort the array
    qsort(arr, n, sizeof(int), compare);

    // If the number of elements is odd, return the middle element
    if (n % 2 != 0) {
        return arr[n / 2];
    } else {
        // If the number of elements is even, return the average of the two middle elements
        return (arr[(n / 2) - 1] + arr[n / 2]) / 2.0;
    }
}

int main() {
    int n;
    scanf("%d", &n);  // Input the size of the array

    int arr[n];

    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function to find and print the median
    double median = findMedian(arr, n);
    printf("Median: %.2f\n", median);

    return 0;
}
