#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);

    if(b>a){
        printf("Profit");
    }
    else if(b<a) {
        printf("Loss");
    }
    else{
        printf("Np profit/no loss");
    }
    return 0;
}