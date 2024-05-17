#include <stdio.h>


void printCharacter(char ch) {
    printf("The entered character is: %c\n", ch);
}

int main() {
    char inputChar;


    printf("Enter a character: ");
    scanf("%c", &inputChar);

    printCharacter(inputChar);

    return 0;
}

