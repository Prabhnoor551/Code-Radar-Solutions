#include <stdio.h>
int main() 
{
   int a,b;
   char sign;

   scanf("%d",&a);
   scanf("%d",&b);
   scanf("%c",&sign);

   switch(sign)
   {       
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%d",a/b);
        break;
        default:
        printf("Invalid");

   }


    return 0;
}