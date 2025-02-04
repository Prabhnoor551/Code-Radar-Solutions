#include <stdio.h>
int main() 
{
    int a,b,c,d;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    int d= (a+b+c)/3;
 
    printf("Average: %.2f", d);

    return 0;
}