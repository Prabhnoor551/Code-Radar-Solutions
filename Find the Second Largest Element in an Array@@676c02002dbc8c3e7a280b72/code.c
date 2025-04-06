#include <stdio.h>
#include <limits.h>  // For INT_MIN

int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        return -1;  // If there are less than 2 elements, there's no second largest element
    }

    int largest = INT_MIN;      // Initialize largest to the smallest possible integer
    int secondLargest = INT_MIN; // Initialize second largest to the smallest possible integer

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;  // Update second largest
            largest = arr[i];         // Update largest
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];   // Update second largest if it's smaller than largest
        }
    }

    return (secondLargest == INT_MIN) ? -1 : secondLargest;  // If no second largest, return -1
}

int main() {
    int n;

    // Input the size of the array
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and output the second largest element in the array
    int result = findSecondLargest(arr, n);
    if (result != -1) 
    {
        printf("%d", result);
    }
    else{
        printf("-1");
            }

    return 0;
}
