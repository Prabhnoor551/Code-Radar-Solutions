#include <stdio.h>
int main() 
{
    int m,n,k;

    scanf("%d",&m);
    scanf("%d",&n);

    mask = (m >> n) & 1;

    printf("%d",mask);

    return 0;
}