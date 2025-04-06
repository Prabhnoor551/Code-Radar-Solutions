#include <stdio.h>
#include <stdlib.h>

// Comparison function for sorting
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// Function to find all unique pairs with the given sum
void findPairsWithSum(int arr[], int n, int target) {
    // Sort the array
    qsort(arr, n, sizeof(int), compare);

    int left = 0;
    int right = n - 1;

    // Print pairs
    while (left < right) {
        int currentSum = arr[left] + arr[right];

        // If the current sum matches the target
        if (currentSum == target) {
            printf("%d %d", arr[left], arr[right]);
            left++;  // Move left pointer to the right
            right--; // Move right pointer to the left
        }
        // If the current sum is less than the target, move left pointer
        else if (currentSum < target) {
            left++;
        }
        // If the current sum is greater than the target, move right pointer
        else {
            right--;
        }
    }
}

int main() {
    int n, target;
    scanf("%d", &n);  // Input the size of the array
    scanf("%d", &target);  // Input the target sum

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Input the elements of the array
    }

    findPairsWithSum(arr, n, target);  // Call function to find and print pairs

    return 0;
}

