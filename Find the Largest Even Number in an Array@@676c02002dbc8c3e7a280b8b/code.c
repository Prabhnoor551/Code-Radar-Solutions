#include <stdio.h>
#include <limits.h>  // For INT_MIN

int findLargestEven(int arr[], int n) {
    int largestEven = INT_MIN;  // Start with the smallest possible integer

    // Loop through the array to find the largest even number
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {  // Check if the number is even
            if (arr[i] > largestEven) {
                largestEven = arr[i];  // Update if current even number is larger
            }
        }
    }

    // If largestEven is still INT_MIN, it means no even number was found
    return (largestEven == INT_MIN) ? -1 : largestEven;
}

int main() {
    int n;
    scanf("%d", &n);  // Input the size of the array

    int arr[n];

    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function to find the largest even number
    int result = findLargestEven(arr, n);

    // Output the result
    if (result == -1) {
        printf("No even number found.\n");
    } else {
        printf("%d", result);
    }

    return 0;
}
