#include <stdio.h>
void countOccurrences(int arr[], int n, int target) {
    int count = 0;

    // Loop through the array and count occurrences of the target value
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    printf("%d", target, count);
}

int main() {
    int n, target;

    // Input size of array
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the target value to count
    scanf("%d", &target);

    // Call the function to count occurrences
    countOccurrences(arr, n, target);

    return 0;
}

