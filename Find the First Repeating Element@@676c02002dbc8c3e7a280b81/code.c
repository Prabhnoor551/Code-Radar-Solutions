#include <stdio.h>

int findFirstRepeating(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        // Check if arr[i] is repeated by checking the remaining elements
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return arr[i];  // Found the first repeating element
            }
        }
    }
    return -1;  // No repeating element found
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

    // Find the first repeating element
    int result = findFirstRepeating(arr, n);

    if (result != -1) {
        printf("%d ", result);
    }
    else 
    {
        printf("-1");
    }

    return 0;
}
