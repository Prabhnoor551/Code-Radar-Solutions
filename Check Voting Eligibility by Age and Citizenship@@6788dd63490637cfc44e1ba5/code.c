#include <stdio.h>
int main() 
{
    int age,b;

    scanf("%d",&age);
    scanf("%d",&b);

    if(b==1 && age>=18)
    {
        printf("Eligible");
    }
    
    else{
        printf("Not Eligible");

    }

    return 0;
}