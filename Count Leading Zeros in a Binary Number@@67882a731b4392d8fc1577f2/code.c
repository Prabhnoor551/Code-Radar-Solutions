#include <stdio.h>

int countLeadingZeros(int num) {
    if (num == 0) return 32; // Special case for 0

    int count = 0;
    for (int i = 31; i >= 0; i--) {
        if (num & (1 << i)) {
            break; // Stop when the first set bit (1) is found
        }
        count++;
    }
    return count;
}

int main() {
    int num;
    scanf("%d", &num);

    int leadingZeros = countLeadingZeros(num);
    printf("%d\n", leadingZeros);

    return 0;
}