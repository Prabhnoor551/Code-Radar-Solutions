#include <stdio.h>

int setNthBit(int num, int n) {
    return num | (1 << n); // Set the nth bit using bitwise OR
}

int main() {
    int num, n;
    scanf("%d %d", &num, &n);

    int updatedNum = setNthBit(num, n);
    printf("%d\n", updatedNum);

    return 0;
}