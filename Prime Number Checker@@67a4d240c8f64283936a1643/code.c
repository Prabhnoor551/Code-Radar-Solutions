#include <stdio.h>

// Function prototype
int isPrime(int num);

int main() {
    int number;

    // Asking user for input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Checking if the number is prime
    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}

// Function to check whether a number is prime
int isPrime(int num) {
    // Handling special cases
    if (num <= 1) {
        return 0;  // 0 and 1 are not prime
    }

    // Checking divisibility from 2 to sqrt(num)
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // num is divisible by i, so it's not prime
        }
    }

    return 1;  // num is prime
}
