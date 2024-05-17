#include <stdio.h>

// Function to find the length of a string
int findStringLength(const char *str) {
    int length = 0;

    // Loop until the null character '\0' is encountered
    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char inputString[100];

    // Input a string
    printf("Enter a string: ");
    scanf("%[^\n]", inputString);

    // Call the function to find the length and display the result
    printf("Length of the string is: %d\n", findStringLength(inputString));

    return 0;
}

