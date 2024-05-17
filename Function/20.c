#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool IsPrime(int num) {
    if (num <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // If the number is divisible by any other number, it's not prime
        }
    }

    return true; // If no divisors are found, the number is prime
}

// Function to generate the Nth prime number
int GenNthPrime(int N) {
    if (N <= 0) {
        printf("Invalid input. N should be a positive integer.\n");
        return -1; // Invalid input
    }

    int count = 0;
    int num = 2; // Start from the first prime number

    while (count < N) {
        if (IsPrime(num)) {
            count++;
        }

        if (count < N) {
            num++;
        }
    }

    return num;
}

int main() {
    int N;

    // Input the value of N
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Call the GenNthPrime function
    int nthPrime = GenNthPrime(N);

    if (nthPrime != -1) {
        printf("The %dth prime number is: %d\n", N, nthPrime);
    }

    return 0;
}
