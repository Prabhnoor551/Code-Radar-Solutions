#include <stdio.h>

void printBinary(int num) {
    int bits = sizeof(num) * 8; // Number of bits in an integer
    int started = 0; // Flag to remove leading zeros

    for (int i = bits - 1; i >= 0; i--) {
        if (num & (1 << i)) {
            started = 1; // Found the first '1', start printing
        }
        if (started) {
            printf("%d", (num & (1 << i)) ? 1 : 0);
        }
    }
    
    if (!started) { // If the number is 0, print '0'
        printf("0");
    }
    printf("\n");
}

int main() {
    int num;
    scanf("%d", &num);

    printBinary(num);

    return 0;
}