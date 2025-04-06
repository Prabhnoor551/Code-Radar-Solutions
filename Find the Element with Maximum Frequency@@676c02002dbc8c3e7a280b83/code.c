#include <stdio.h>
#include <limits.h>

#define MAX 1000  // Define a maximum value for element range

int findMaxFrequency(int arr[], int n) {
    int freq[MAX] = {0};  // Array to store the frequency of elements
    int max_freq = 0;  // Variable to store maximum frequency
    int max_elem = -1;  // Element with the maximum frequency

    // Count the frequency of each element
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Find the element with the maximum frequency
    for (int i = 0; i < MAX; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            max_elem = i;
        }
    }

    return max_elem;
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

    // Find the element with the maximum frequency
    int result = findMaxFrequency(arr, n);

    printf("%d ", result);

    return 0;
}
