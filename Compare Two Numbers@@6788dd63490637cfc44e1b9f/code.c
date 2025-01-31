#include <stdio.h>
int main() 
{   
    int a,b;

    scanf("%d",&a);
    scanf("%d",&b);
    
    if(a==b)
    {
        printf("Equal");
    }
    else if(a>b)
    {
        printf("First");
    }
    else
    {
        printf("Second");
    }

    return 0;
}