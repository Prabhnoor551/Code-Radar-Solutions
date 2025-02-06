#include <stdio.h>
int main() 
{
    int i,j,r;

    scanf("%d",&r);

    for(i=1; i<=r; i++)
    {
        for(j=1; j<=r-1; j++)
          printf("");
        for(k=1; k<=2*i-1; k++)
          printf("%c ", j-1+'A');
    printf("\n");
    }
    return 0;
}