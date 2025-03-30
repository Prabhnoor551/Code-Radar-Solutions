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

    for(int i=0; i<n; i++)
    {
        sum += a[i];
    }
    
    int avg = sum/2;

    printf("5d", avg);

    return 0;
}