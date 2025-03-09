#include <stdio.h>

unsigned int flip_bits(unsigned int n)
{
    return ~n;
}

int main()
{
    unsigned int num;

    // Prompting the user to input a number
    printf("Enter an unsigned integer: ");
    scanf("%u", &num);

    unsigned int flipped_num = flip_bits(num);

    // Output the flipped number
    printf("Flipped number: %u\n", flipped_num);
    
    return 0;
}
