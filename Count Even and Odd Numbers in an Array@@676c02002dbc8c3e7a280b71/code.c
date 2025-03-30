#include <stdio.h>
int main() {
    int n;

    // Input the number of elements in the array

    scanf("%d", &n);

    int arr[n];  // Declare the array with size n

    // Input the array elements
   
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int evenCount = 0;  // Variable to count even numbers
    int oddCount = 0;   // Variable to count odd numbers

    // Traverse the array and count even and odd numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;  // Increment even count if the number is even
        } else {
            oddCount++;   // Increment odd count if the number is odd
        }
    }

    // Output the results
    printf("%d ", evenCount);
    printf("%d\n", oddCount);

    return 0;
}


