#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int n;
    scanf("%d", &n);  // Input the size of the array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Input the elements of the array
    }

    if (n < 2) {
        printf("No pairs available\n");
        return 0;
    }

    // Initialize the minimum difference to a large number
    int min_diff = abs(arr[1] - arr[0]);

    // Compare every pair and update the minimum difference
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int diff = abs(arr[j] - arr[i]);
            if (diff < min_diff) {
                min_diff = diff;
            }
        }
    }

    printf("%d %d", min_diff);
    return 0;
}
