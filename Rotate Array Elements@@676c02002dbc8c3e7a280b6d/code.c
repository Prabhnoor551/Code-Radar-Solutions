/*#include<stdio.h>
int main()
{
    int n;
    int a[];
    
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i=4; i<=pos-1; i--)
    {
        a[i+1] = a[i];
        a[pos-1] = num;
        size++;
    }
    return 0;
}*/


#include <stdio.h>

int main() {
    int n, k;
    
    // Read array size
    scanf("%d", &n);
    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the number of rotations
    scanf("%d", &k);
    
    //k = k % n; // Handle cases where k > n

    // Reverse the entire array
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Reverse the first K elements
    for (int i = 0, j = k - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Reverse the remaining elements
    for (int i = k, j = n - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}