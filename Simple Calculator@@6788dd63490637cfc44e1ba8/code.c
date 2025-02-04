#include <stdio.h>
int main() 
{
   int a,b;
   char sign;

   scanf("%d",&a); 
   scanf("%d",&b);
   scanf(" %c",&sign);

   switch(sign)
   {       
        case '+':
        printf("%d\n",a+b);
        break;
        case '-':
        printf("%d\n",a-b);
        break;
        case '*':
        printf("%d\n",a*b);
        break;
        case '/':
        printf("%d\n",a/b);

   }


    return 0;
}