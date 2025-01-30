#include <stdio.h>
int main()
{
    int a,b;

    scanf("%d",&a);
    scanf("%d",&b);

    if(b>a){
        printf("Profit");
    }
    else{
        printf("Loss");
    }
    return 0;
}