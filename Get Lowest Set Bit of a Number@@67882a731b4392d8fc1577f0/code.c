#include <stdio.h>

int findLowestSetBitPosition(int num) {
    if (num == 0) return -1; 

    int position = 0;
    while ((num & 1) == 0) { 
        num >>= 1;
        position++;
    }
    return position;
}

int main() {
    int num;
    scanf("%d", &num);

    int position = findLowestSetBitPosition(num);
    printf("%d\n", position);

    return 0;
}