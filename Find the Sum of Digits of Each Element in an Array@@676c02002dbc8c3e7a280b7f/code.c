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
        int m = a[i]; int sum = 0;
        while(m!=0)
        {
            
            int rem = m%10;
            sum = sum+rem;
            m = m/10;
        }

        printf("%d ", sum);
    }

    return 0;
}