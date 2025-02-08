#include <stdio.h>

int countTrailingZeroes(int n)
{
    int count = 0;

    while((n&1) == 0 && n!=0)
    {
        count ++;
        n >> 1;
    }
    return count;
}
int main() 
{
    int n;

    scanf("%d",&n);

    int result = countTrailingZeroes(n);

    printf("%d",result);

    return 0;
}