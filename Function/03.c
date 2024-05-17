#include <stdio.h>

// Function to determine if a number is even or odd
void checkEvenOdd(int number) {
    if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }
}

int main() {
    int inputNumber;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &inputNumber);

    // Call the function to check if the number is even or odd
    checkEvenOdd(inputNumber);

    return 0;
}

