#include <stdio.h>

unsigned int flip_bits(unsigned int n)
{
    return ~n;
}

int main()
{
    unsigned int num;

    scanf("%u", &num);

    unsigned int flipped_num = flip_bits(num);

    printf("%u", flipped_num);
    
    return 0;
}