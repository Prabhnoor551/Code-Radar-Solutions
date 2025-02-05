#include <stdio.h>
int main() 
{
    int x,i;

    scanf("%d",&x);
    scanf("%d",&i);

    x = x^(1<<i);

    printf("%d",x);
    
    return 0;
}