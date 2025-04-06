#include <stdio.h>

#define MAX_VAL 100  // Assuming numbers are between 0 and 100

int main() {
    int n;
    scanf("%d", &n);  // Input the size of the array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Input the elements of the array
    }

    // Frequency array to count the occurrences of elements
    int freq[MAX_VAL + 1] = {0};  // Initialize all to 0

    // Count the frequency of each element
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Find the element with maximum frequency
    int max_freq = 0;
    int max_element = -1;
    for (int i = 0; i <= MAX_VAL; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            max_element = i;
        }
    }

    // Output the element with the highest frequency
    printf("%d\n", max_element);

    return 0;
}
