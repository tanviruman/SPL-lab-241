#include <stdio.h>

int calculateSum(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + calculateSum(n - 1);
    }
}

int main() {
    int n;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Sum of numbers from 1 to %d is: %d\n", n, calculateSum(n));

    return 0;
}

