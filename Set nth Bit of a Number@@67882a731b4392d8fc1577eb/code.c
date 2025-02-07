#include <stdio.h>
int main() 
{
    int x;
    int i;
    int mask; // = 1<<(i-1);

    scanf("%d",&x);
    scanf("%d",&i);

    mask = 1 << (i-1);

    x = x | mask;

    printf("%d\n",x);


    return 0;
}