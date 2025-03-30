#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Input the number of elements in the array

    int a[n];  // Declare the array

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Print the frequency of each element
    for (int i = 0; i < n; i++) {
        int count = 1;

        // Skip if the element has already been counted
        if (a[i] == -1) {
            continue;
        }

        // Count occurrences of a[i]
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
                a[j] = -1;  // Mark element as counted
            }
        }

        printf("%d\n", a[i], count);
    }

    return 0;
}
