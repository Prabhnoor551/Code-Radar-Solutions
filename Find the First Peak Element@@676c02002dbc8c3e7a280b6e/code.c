#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check the first element
    if (arr[0] >= arr[1]) {
        printf("The first peak element is: %d\n", arr[0]);
        return 0;
    }

    // Check the middle elements
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            printf("The first peak element is: %d\n", arr[i]);
            return 0;
        }
    }

    // Check the last element
    if (arr[n - 1] >= arr[n - 2]) {
        printf("The first peak element is: %d\n", arr[n - 1]);
    }

    return 0;
}
