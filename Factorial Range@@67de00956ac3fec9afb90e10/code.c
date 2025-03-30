#include <stdio.h>
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }

    int fact = 1;
    for (int i = 2; i <= num; i++) {  // Corrected loop to include num
        fact *= i;
    }

    return fact;
}

// Function to print factorials in a given range
void factorialRange(int start, int end) {
    if (start > end || start < 0 || end < 0) {
        printf("Invalid range\n");
        return;
    }

    for (int i = start; i <= end; i++) {  // Corrected the loop condition
        printf("%d\n", i, factorial(i));  // Print formatted output
    }
}

