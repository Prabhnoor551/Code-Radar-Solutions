#include <stdio.h>
int main() 
{
    int num,c;

    scanf("%d", &num);

    if(num & (1 << c))
    {
        printf("Set");
    }
    else
    {
        printf("Not Set");
    }
    return 0;
}