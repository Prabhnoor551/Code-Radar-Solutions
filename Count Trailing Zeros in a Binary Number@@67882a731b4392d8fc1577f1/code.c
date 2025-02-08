#include <stdio.h>

int countTrailingZeroes(int n)
{
    int count = 0;

    while(n>0 && (n&1)==0)
    {
        count ++;
        n >>= 1;
    }
    return count;
}
int main() 
{
    int num;

    scanf("%d",&num);

    int result = countTrailingZeroes(num);

    printf("%d",result);

    return 0;
}