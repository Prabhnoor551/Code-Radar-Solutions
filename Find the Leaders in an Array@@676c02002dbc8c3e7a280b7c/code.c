#include <stdio.h>

void findLeaders(int arr[], int n) {
    // If the array is empty, return
    if (n == 0) {
        return;
    }

    // The rightmost element is always a leader
    int max_from_right = arr[n - 1];
    printf("%d ", max_from_right);  // Print the last element as a leader

    // Traverse the array from second last element to the first element
    for (int i = n - 2; i >= 0; i--) {
        // If the current element is greater than or equal to max_from_right
        if (arr[i] >= max_from_right) {
            printf("%d ", arr[i]);
            max_from_right = arr[i];  // Update the max_from_right
        }
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
