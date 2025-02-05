#include <stdio.h>
int main() 
{
    int x;
    int n;
    
    scanf("%d",&x);
    scanf("%d",&n);

    x = x&(x-n);

    printf("%d",x);

    return 0;
}