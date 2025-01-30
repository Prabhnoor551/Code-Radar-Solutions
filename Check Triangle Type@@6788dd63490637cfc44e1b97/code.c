#include <stdio.h>
int main()
{
    int a,b,c;
    
    if(a==b && b==c && c==b)
    {
        printf("Equilateral");
    }
    else if(a==b || b==c || c==a)
    {
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}