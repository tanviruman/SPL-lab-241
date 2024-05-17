#include <stdio.h>

// Function to calculate GCD (greatest common divisor)
int calculateGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM (least common multiple)
int calculateLCM(int a, int b) {
    // LCM(a, b) = (a * b) / GCD(a, b)
    return (a * b) / calculateGCD(a, b);
}

int main() {
    while (1) {
        int num1, num2;

        // Input two positive integers
        printf("Enter the first positive integer: ");
        scanf("%d", &num1);

        if (num1 <= 0) {
            printf("Please enter a positive integer.\n");
            continue;
        }

        printf("Enter the second positive integer: ");
        scanf("%d", &num2);

        if (num2 <= 0) {
            printf("Please enter a positive integer.\n");
            continue;
        }

        // Calculate and print GCD and LCM
        int gcd = calculateGCD(num1, num2);
        int lcm = calculateLCM(num1, num2);

        printf("GCD of %d and %d is: %d\n", num1, num2, gcd);
        printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
    }

    return 0;
}

