#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void displayFibonacciSeries(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
}

int main() {
    int terms;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &terms);

    if (terms < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    printf("Fibonacci Series up to %d terms: ", terms);
    displayFibonacciSeries(terms);

    return 0;
}

