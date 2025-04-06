#include <stdio.h>
#include <stdlib.h>

// Function to find and print all unique pairs with the given sum
void findPairsWithSum(int arr[], int n, int target) {
    if (n < 2) {
        printf("No pairs available.\n");
        return;
    }

    // Hash set to track the elements we have already seen
    int hash_set[10000] = {0};  // A simple hash set for positive integers
    
    printf("Unique pairs with sum %d are:\n", target);
    for (int i = 0; i < n; i++) {
        int complement = target - arr[i];

        // If complement exists in the set, print the pair
        if (complement >= 0 && hash_set[complement]) {
            printf("(%d %d)", arr[i], complement);
            hash_set[complement] = 0;  // Ensure we don't print the pair again
        }

        // Add the current element to the hash set
        hash_set[arr[i]] = 1;
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

    findPairsWithSum(arr, n, target);  // Call the function to find and print pairs

    return 0;
}
.