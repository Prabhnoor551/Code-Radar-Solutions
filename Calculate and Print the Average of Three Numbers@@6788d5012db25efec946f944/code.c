#include <stdio.h>
int main() 
{
    float a,b,c,d;

    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);

    d= (a+b+c)/3;
 
    printf("Average: %.2f", d);

    return 0;
}