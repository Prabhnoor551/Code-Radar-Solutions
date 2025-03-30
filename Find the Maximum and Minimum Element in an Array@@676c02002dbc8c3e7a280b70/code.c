#include <stdio.h>
int main() 
{
    int n;
    scanf("%d", &n);

    int arr[n];  // Declare the array with size n

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min to the first element
    int max = arr[0];
    int min = arr[0];

    // Traverse the array to find max and min
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Output the results
    printf("%d", min);
    printf("%d ", max);

    return 0;
}
