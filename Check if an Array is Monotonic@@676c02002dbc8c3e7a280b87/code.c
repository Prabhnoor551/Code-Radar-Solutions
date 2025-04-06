#include <stdio.h>
#include <stdbool.h>

bool isMonotonic(int arr[], int n) {
    // Assume the array is both non-decreasing and non-increasing initially
    bool increasing = true;  
    bool decreasing = true;  

    // Traverse the array and check the conditions
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            decreasing = false;  // If current element is greater, it's not decreasing
        }
        if (arr[i] < arr[i - 1]) {
            increasing = false;  // If current element is smaller, it's not increasing
        }
    }

    // If either increasing or decreasing is true, the array is monotonic
    return increasing || decreasing;
}

int main() {
    int n;

    // Input the size of the array
    scanf("%d", &n);

    // Ensure that the size is valid
    if (n <= 0) {
        printf("Invalid input. Array size must be greater than 0.\n");
        return 1;  // Exit the program if the size is invalid
    }

    int arr[n];

    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if the array is monotonic
    if (isMonotonic(arr, n)) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
