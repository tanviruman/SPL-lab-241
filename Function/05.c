#include <stdio.h>

// Function to compare two numbers
void compareNumbers(int num1, int num2) {
    if (num1 > num2) {
        printf("%d is greater than %d.\n", num1, num2);
    } else if (num1 < num2) {
        printf("%d is less than %d.\n", num1, num2);
    } else {
        printf("%d is equal to %d.\n", num1, num2);
    }
}

int main() {
    int number1, number2;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &number1);

    printf("Enter the second number: ");
    scanf("%d", &number2);

    // Call the function to compare the numbers
    compareNumbers(number1, number2);

    return 0;
}
