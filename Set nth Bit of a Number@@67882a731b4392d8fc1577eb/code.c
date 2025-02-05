#include <stdio.h>
int main() 
{
    int x;
    int i;
    int mask = 1<<(i-1);

    scanf("%d",&x);
    scanf("%d",&i);

    x=x|mask;

    printf("%d",x);


    return 0;
}