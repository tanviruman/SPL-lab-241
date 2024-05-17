#include <stdio.h>

// Function to calculate the factorial of a number
long long calculateFactorial(int n) {
    int factorial = 1;

    // Calculate factorial using a loop
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    return factorial;
}

int main() {
    int num;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check for non-negative input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Call the function to calculate factorial and display the result
        printf("Factorial of %d is: %d\n", num, calculateFactorial(num));
    }

    return 0;
}

