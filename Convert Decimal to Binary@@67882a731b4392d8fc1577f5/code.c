#include <stdio.h>
int main() 
{
    int a,i;

    scanf("%d",%a);

    if(a==0)
    {
        printf("0");
    }
    else
    {
        for(i=31; i>=0; i--)
        {
            printf("%d", (a>>i)&1);
        }
    }

    printf("\n");

    return 0;
}