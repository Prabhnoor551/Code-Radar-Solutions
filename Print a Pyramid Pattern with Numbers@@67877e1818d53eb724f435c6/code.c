#include <stdio.h>
int main() 
{
    int i,j,r;

    scanf("%d",&r);

    for(i=1; i<=r; i++)
    {
        for(j=1; j<=r-i; j++)
          print(" ");
        for(j=1; j<=2*i-1; j++)
          printf("%d");
        printf("\n");
    }

    return 0;
}