#include <stdio.h>

void replaceWithGreatestOnRight(int arr[], int n) {
    int max_right = -1;  // The greatest element to the right of the last element is considered -1

    // Traverse the array from right to left
    for (int i = n - 1; i >= 0; i--) {
        int current = arr[i];  // Store the current element
        arr[i] = max_right;    // Replace current element with the greatest element to its right
        max_right = (current > max_right) ? current : max_right;  // Update max_right
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

    // Replace each element with the greatest element to its right
    replaceWithGreatestOnRight(arr, n);

    // Output the modified array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


    return 0;
}
