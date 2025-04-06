#include <stdio.h>
#include <stdlib.h>

// Function to find duplicates in the array
void findDuplicates(int arr[], int n) {
    if (n <= 1) {
        printf("No duplicates found.\n");
        return;
    }

    // Creating a hash map (we'll use an array to store frequency)
    int hash[n];  // This will store frequency of elements

    // Initialize the hash array to zero
    for (int i = 0; i < n; i++) {
        hash[i] = 0;
    }

    // Traverse through the array and count frequencies
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;  // Increment the frequency of the element
    }

    // Check and print duplicate elements
    int foundDuplicate = 0;
    for (int i = 0; i < n; i++) {
        if (hash[arr[i]] > 1) {  // If the frequency is greater than 1, it's a duplicate
            printf("%d\n", arr[i]);
            hash[arr[i]] = 0;  // To ensure we don't print the same duplicate multiple times
            foundDuplicate = 1;
        }
    }

    if (!foundDuplicate) {
        printf("No duplicates found.\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);  // Input the size of the array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Input the elements of the array
    }

    findDuplicates(arr, n);  // Call function to find and print duplicates

    return 0;
}
