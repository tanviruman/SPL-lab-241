#include <stdio.h>

// Function to calculate the power of a number
double calculatePower(double x, int y) {
    double result = 1.0;

    // Calculate power using a loop
    for (int i = 1; i <= y; ++i) {
        result *= x;
    }

    return result;
}

int main() {
    double base;
    int exponent;

    // Input the base and exponent
    printf("Enter the base (x): ");
    scanf("%lf", &base);
    printf("Enter the exponent (y): ");
    scanf("%d", &exponent);

    // Check for non-negative exponent
    if (exponent < 0) {
        printf("Exponent should be a non-negative integer.\n");
    } else {
        // Call the function to calculate power and display the result
        printf("%.2lf to the power %d is: %.2lf\n", base, exponent, calculatePower(base, exponent));
    }

    return 0;
}
