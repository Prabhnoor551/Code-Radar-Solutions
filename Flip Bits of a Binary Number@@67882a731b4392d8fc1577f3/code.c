#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int flipped = ~num; // Perform bitwise NOT operation
    printf("%d\n", flipped);

    return 0;
}
