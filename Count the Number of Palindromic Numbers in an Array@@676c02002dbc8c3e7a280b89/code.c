#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    int count=0;
    

   for(int i=0; i<n; i++)
   {
       int m = a[i];
       int rem,sum=0;
    
       while(m!=0 && m>0)
       {
           rem = m%10;
           sum = sum*10+rem;
           m = m/10;
        }
        if(a[i] == sum)
        {
         count++;
        }
    }
    
    printf("%d", count);

    return 0;
}