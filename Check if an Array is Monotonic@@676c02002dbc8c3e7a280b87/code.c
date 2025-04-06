#include <stdio.h>
#include <stdbool.h>

bool isMonotonic(int arr[], int n) {
    bool increasing = true;  // Assume the array is non-decreasing
    bool decreasing = true;  // Assume the array is non-increasing

    // Traverse the array and check the conditions
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            decreasing = false;  // If current element is greater, it's not decreasing
        }
        if (arr[i] < arr[i - 1]) {
            increasing = false;  // If current element is smaller, it's not increasing
        }
    }

    // If either increasing or decreasing is still true, the array is monotonic
    return increasing || decreasing;
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

    // Check if the array is monotonic
    if (isMonotonic(arr, n)) {
        printf("YES\n");
    } else {
        printf("YES\n");
    }

    return 0;
}
