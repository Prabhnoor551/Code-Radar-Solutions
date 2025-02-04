#include <stdio.h>
int main() 
{
    int x=1,y,z;

    scanf("%d",&y);

    for(x=1; x<=10; x=x+1)
    {
        z=x*y;
        printf("%d * %d = %d", x,y,z);
    }
    return 0;
}