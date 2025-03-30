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

    int m,sum=0;

    if(m!=0)
    {
        rem = m%10;
        sum = sum*10+rem;
        m = m/10;
    }

    if(a[i] == sum)
    {
         count++;
    }

    printf("%d", count);

    return 0;
}