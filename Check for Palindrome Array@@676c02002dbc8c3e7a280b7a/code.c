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
    int ispalindrome = 1;
    for(int i=0; i<n;i++)
    {
        
        int m = a[i];
        int sum = 0;

        while(m!=0)
        {
            int rem = m%10;
            sum = sum*10+rem;
            m = m/10;
        }
    
    if(sum != a[i])
    {
        ispalindrome = 0;
        break;
    }
}  
    if(ispalindrome)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    return 0;
}