#include <stdio.h>

int main() {
    char inputString[100];
    printf("Enter a string: ");
    scanf("%[^\n]", inputString);

    int vowelCount = 0;

    for (int i = 0; inputString[i] != '\0'; i++) {
        // Check if the current character is a vowel (both uppercase and lowercase)
        if (
            inputString[i] == 'a' || inputString[i] == 'A' ||
            inputString[i] == 'e' || inputString[i] == 'E' ||
            inputString[i] == 'i' || inputString[i] == 'I' ||
            inputString[i] == 'o' || inputString[i] == 'O' ||
            inputString[i] == 'u' || inputString[i] == 'U'
        ) {
            vowelCount++;
        }
    }

    printf("Number of vowels in the string: %d\n", vowelCount);

    return 0;
}

