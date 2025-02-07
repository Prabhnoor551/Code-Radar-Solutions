#include <stdio.h>
int main() 
{
    int m,n,k;

    scanf("%d",&m);
    scanf("%d",&n);

    k = (m >> n) & 1;

    printf("%d",k);

    return 0;
}