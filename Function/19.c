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

// Function to generate prime numbers less than N
void GeneratePrime(int N) {
    printf("Prime numbers less than %d are: ", N);

    for (int i = 2; i < N; i++) {
        if (IsPrime(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
}

int main() {
    int N;

    // Input the value of N
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Call the GeneratePrime function
    GeneratePrime(N);

    return 0;
}

