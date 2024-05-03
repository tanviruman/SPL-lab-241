#include <stdio.h>


int main() {
    char inputString[100];

    printf("Enter a string: ");
    gets(inputString);

    int length = 0;
    while (inputString[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (inputString[i] > inputString[j]) {
                    char temp = inputString[i];
                    inputString[i] = inputString[j];
                    inputString[j] = temp;
            }
        }
    }

    printf("\nSorted string: %s\n", inputString);

    return 0;
}

