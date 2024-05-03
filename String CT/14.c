#include <stdio.h>
#define ASCII_SIZE 128

int main() {
    char str[100];
    int frequency[ASCII_SIZE] = {0}; // Initialize frequency array with all zeros
    int maxFreq = 0, maxChar = 0, i;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        frequency[str[i]]++;
    }

    // Find the maximum occurring character
    for (i = 0; i < ASCII_SIZE; i++) {
        if (frequency[i] > maxFreq) {
            maxFreq = frequency[i];
            maxChar = i;
        }
    }

    // Printing the maximum occurring character
    printf("Maximum occurring character: %c\n", maxChar);

    return 0;
}
