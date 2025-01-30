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
        printf("Loss");}
    else{
        printf("No Profit No Loss");
    }
    return 0;
}