#include <stdio.h>

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

    int count = 0;

    // Loop through the array to count occurrences of the target value
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    // Output the result
    printf("%d\n", count);

    return 0;
}


