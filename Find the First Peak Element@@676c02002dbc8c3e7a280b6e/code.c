#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n == 1) {
        int value;
        scanf("%d", &value);
        printf("%d\n", value);
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if all elements are the same
    int all_same = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[0]) {
            all_same = 0;
            break;
        }
    }

    // If all elements are the same, print -1
    if (all_same) {
        printf("-1\n");
        return 0;
    }

    // Check the first element
    if (arr[0] >= arr[1]) {
        printf("%d\n", arr[0]);
        return 0;
    }

    // Check the middle elements
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            printf("%d\n", arr[i]);
            return 0;
        }
    }

    // Check the last element
    if (arr[n - 1] >= arr[n - 2]) {
        printf("%d\n", arr[n - 1]);
    }

    // If no local maximum is found, print -1
    printf("-1\n");

    return 0;
}

