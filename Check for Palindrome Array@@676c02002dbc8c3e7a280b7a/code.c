#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);  // Input the number of elements in the array

    int a[n];  // Declare the array

    // Input array elements
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Check if the array is a palindrome
    int isPalindrome = 1;  // Assume the array is a palindrome initially

    // Compare elements from the front and the back
    for(int i = 0; i < n / 2; i++)
    {
        if(a[i] != a[n - i - 1]) {
            isPalindrome = 0;  // Not a palindrome
            break;
        }
    }

    // Output result based on palindrome check
    if(isPalindrome)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
