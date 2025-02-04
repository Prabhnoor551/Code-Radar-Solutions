#include <stdio.h>
int main() 
{
   int a,b;
   char sign;

   scanf("%d %d %c",&a, &b, &sign);

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