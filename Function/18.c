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

int main() {
    int num;

    // Input the number to check for primality
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call the IsPrime function and display the result
    if (IsPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

