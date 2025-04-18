#include <stdio.h>

int main() 
{
    int n;

    // Taking the size of the array from the user
   
    scanf("%d", &n);

    int a[n];  // Declare an array of size n

    // Taking the elements of the array from the user
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Check if the array is sorted
    int isSorted = 1; // Assume it's sorted unless proven otherwise
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            isSorted = 0;  // Set flag to 0 if the array is not sorted
            break;
        }
    }

    // Output the result of the sorted check
    if (isSorted) {
        printf("Sorted\n");
    } else {
        printf("Not Sorted\n");
    }

    return 0;
}
