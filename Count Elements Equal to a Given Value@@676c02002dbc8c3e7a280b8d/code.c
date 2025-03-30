#include <stdio.h>

// Function to count digits of a number
int countDigits(int num) {
    int count = 0;
    // If the number is 0, it has 1 digit
    if (num == 0) {
        return 1;
    }
    // Count digits until the number becomes 0
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    int n;
    scanf("%d", &n);  // Input the number of elements in the array

    int a[n];  // Declare the array

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Count the digits of each element in the array
    for (int i = 0; i < n; i++) {
        int digits = countDigits(a[i]);
        printf("Element %d has %d digits\n", a[i], digits);
    }

    return 0;
}
