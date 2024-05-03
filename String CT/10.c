#include <stdio.h>

int main() {
    char inputString[100];

    printf("Enter a string: ");
    gets(inputString);

    int length = 0;
    while (inputString[length] != '\0') {
        length++;
    }

    int isPalindrome = 1; // 1 for true, 0 for false
    for (int i = 0; i < length / 2; i++) {
        if (inputString[i] != inputString[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("\nThe entered string is a palindrome.\n");
    } else {
        printf("\nThe entered string is not a palindrome.\n");
    }

    return 0;
}

