#include <stdio.h>

// Function to determine if a number is positive, negative, or zero
void checkNumber(int number) {
    if (number > 0) {
        printf("%d is a positive number.\n", number);
    } else if (number < 0) {
        printf("%d is a negative number.\n", number);
    } else {
        printf("The number is zero.\n");
    }
}

int main() {
    int inputNumber;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &inputNumber);

    // Call the function to check if the number is positive, negative, or zero
    checkNumber(inputNumber);

    return 0;
}

