#include <stdio.h>

// Function to swap two numbers using pass by value
void swapNumbers(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    // Note: Changes made here won't reflect in the calling function

    // Display the numbers after swapping
    printf("After swapping: num1 = %d, num2 = %d\n", a, b);
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Display the numbers before swapping
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Call the function to swap numbers (passing by value)
    swapNumbers(num1, num2);


    return 0;
}
