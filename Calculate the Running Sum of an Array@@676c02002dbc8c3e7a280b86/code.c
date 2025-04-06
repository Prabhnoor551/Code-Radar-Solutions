#include <stdio.h>

void runningSum(int arr[], int n) {
    // Traverse the array and compute the running sum
    for (int i = 1; i < n; i++) {
        arr[i] += arr[i - 1];  // Add the previous element to the current element
    }
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

    // Calculate the running sum
    runningSum(arr, n);

    // Output the running sum array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
