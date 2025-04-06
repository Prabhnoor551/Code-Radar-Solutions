#include <stdio.h>

int countGreaterThan(int arr[], int n, int value) {
    int count = 0;

    // Loop through the array and count elements greater than the given value
    for (int i = 0; i < n; i++) {
        if (arr[i] > value) {
            count++;
        }
    }

    return count;
}

int main() {
    int n, value;

    // Input the size of the array
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the value to compare against
    scanf("%d", &value);

    // Call the function to count elements greater than the given value
    int result = countGreaterThan(arr, n, value);

    // Output the result
    printf("%d\n", result);

    return 0;
}
