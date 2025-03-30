#include<stdio.h>
#include<stdlib.h>  // For abs() function

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

    // Process each element in the array
    for(int i = 0; i < n; i++)
    {
        int m = abs(a[i]);  // Take the absolute value of the element
        int sum = 0;        // Initialize sum to 0 for each element

        // Sum the digits of the number
        while(m != 0)
        {
            int rem = m % 10;  // Get the last digit
            sum += rem;        // Add it to sum
            m = m / 10;        // Remove the last digit
        }

        // Print the sum of digits of the current element
        printf("%d ", sum);
    }

    return 0;
}
