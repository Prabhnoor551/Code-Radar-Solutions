#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Input the number of elements in the array

    int a[n];  // Declare the array

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Count the digits of each element
    for (int i = 0; i < n; i++) {
        int num = a[i];
        int count = 0;
        
        // If the number is 0, it has 1 digit
        if (num == 0) {
            count = 1;
        } else {
            // Count digits of the number
            while (num != 0) {
                num /= 10;
                count++;
            }
        }
        
        // Print the number and its digit count
        printf("%d", count);
    }

    return 0;
}
