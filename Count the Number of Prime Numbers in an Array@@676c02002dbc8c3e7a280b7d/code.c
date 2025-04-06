#include <stdio.h>
#include <math.h>  // Include math.h to use sqrt()

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0;  // Numbers less than or equal to 1 are not prime
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0;  // If divisible by any number other than 1 and itself, it's not prime
    }
    return 1;  // It's prime
}

// Function to count the number of prime numbers in an array
int countPrimes(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            count++;  // Increment count if the element is prime
        }
    }
    return count;
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

    // Count and output the number of prime numbers in the array
    int result = countPrimes(arr, n);
    printf("The number of prime numbers in the array is: %d\n", result);

    return 0;
}


