#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d ", &a[i]);
    }

    int m,rem,sum=0,count;

    if(m!=0)
    {
        rem = m%10;
        sum = sum*10+rem;
        m = m/10;
    }
    int i;
    if(a[i] == sum)
    {
         count++;
    }

    printf("%d", count);

    return 0;
}