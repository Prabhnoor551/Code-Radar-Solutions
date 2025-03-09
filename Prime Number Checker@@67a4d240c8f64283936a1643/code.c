#include <stdio.h>

// Function prototype
int isPrime(int num);

int main() {
    int number;

    // Asking user for input
    scanf("%d", &number);  // Take input without additional text

    // Output 1 if prime, otherwise 0
    printf("%d\n", isPrime(number)); 

    return 0; // Return 0 indicates successful execution
}

// Function to check whether a number is prime
int isPrime(int num) {
    // Handling special cases
    if (num <= 1) {
        return 0;  // 0 and 1 are not prime numbers
    }

    // Checking divisibility from 2 to sqrt(num)
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // num is divisible by i, so it's not prime
        }
    }

    return 1;  // num is prime
}
