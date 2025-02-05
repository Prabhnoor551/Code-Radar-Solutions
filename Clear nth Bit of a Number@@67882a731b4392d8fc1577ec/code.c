#include <stdio.h>
int main() 
{
    int x;
    int n;
    
    scanf("%d",&x);
    scanf("%d",&n);

    x = (x - n) & x;
    printf("%d",x);

    return 0;
}