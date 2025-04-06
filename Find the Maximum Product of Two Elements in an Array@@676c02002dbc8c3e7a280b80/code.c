#include <stdio.h>
#include <stdlib.h>  // For qsort function

// Comparison function for sorting integers in descending order
int compare(const void* a, const void* b) {
    return (*(int*)b - *(int*)a);  // Sort in descending order
}

int findMaxProduct(int arr[], int n) {
    // Sort the array in descending order
    qsort(arr, n, sizeof(int), compare);

    // Compute the product of the two largest elements
    int product1 = arr[0] * arr[1];

    // Compute the product of the two smallest elements (important for negative numbers)
    int product2 = arr[n - 1] * arr[n - 2];

    // Return the maximum of the two products
    return (product1 > product2) ? product1 : product2;
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

    // Find the maximum product of two elements
    int result = findMaxProduct(arr, n);

    printf("%d ", result);

    return 0;
}
