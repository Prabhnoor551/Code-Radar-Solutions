#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) { // Check for factors up to sqrt(num)
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

int main() {
    int t;

    // Read the number of test cases
    scanf("%d", &t);

    // Loop through each test case
    while(t--) {
        int num;

        // Read the number to check for primality
        scanf("%d", &num);

        // Output 1 if prime, 0 if not prime
        printf("%d\n", isPrime(num));
    }

    return 0;
}
