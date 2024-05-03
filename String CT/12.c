#include <stdio.h>
#include <string.h>

int main() {
    char inputString[1000];
    char word[50];

    printf("Enter a string: ");
    scanf("%[^\n]", inputString);

    printf("Enter the word to count: ");
    scanf("%s", word);

    int wordLength = strlen(word);

    int count = 0;
    for (int i = 0; inputString[i] != '\0'; i++) {
        int match = 1; // Flag to check if the word matches
        for (int j = 0; j < wordLength; j++) {
            if (inputString[i + j] != word[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            count++;
        }
    }

    printf("\nThe word '%s' occurs %d times in the entered string.\n", word, count);

    return 0;
}

