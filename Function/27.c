#include <stdio.h>

// Function to get the number and base from the user
void getNumberAndBase() {
    int number;
    int base;
    char convertedNumber[100];
    do {
        printf("Enter the positive integer to be converted: ");
        scanf("%d", &number);

        if (number < 0) {
            printf("Please enter a positive integer.\n");
        }
    } while (number < 0);

    do {
        printf("Enter the base (between 2 and 16): ");
        scanf("%d", &base);

        if (base < 2 || base > 16) {
            printf("Please enter a base between 2 and 16.\n");
        }
    } while (base < 2 || base > 16);
    convertNumber(number,base,convertedNumber);
}

// Function to convert the number to another base
void convertNumber(int number, int base, char convertedNumber[]) {
    int index = 0;

    while (number > 0) {
        int remainder = number % base;
        if (remainder < 10)
        {
            convertedNumber[index] = remainder + '0';
        }
        else
        {
            convertedNumber[index] = remainder - 10 + 'A';
        }
        index++;
        number /= base;
    }

    // Null-terminate the string
    convertedNumber[index] = '\0';

    // Reverse the string
    for (int i = 0, j = index - 1; i < j; i++, j--) {
        char temp = convertedNumber[i];
        convertedNumber[i] = convertedNumber[j];
        convertedNumber[j] = temp;
    }

    showConvertedNumber(convertedNumber);
}

// Function to show the converted number
void showConvertedNumber(char convertedNumber[]) {
    printf("Converted number: %s\n", convertedNumber);
}

int main() {
    // Get the number and base from the user
    getNumberAndBase();

    return 0;
}

