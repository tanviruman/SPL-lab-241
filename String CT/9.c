#include <stdio.h>

int main() {
    char str[100], ch;
    int count = 0, i;

    printf("Enter a string: ");
    gets(str);

    printf("Enter a character: ");
    scanf("%c", &ch);

    // Convert character to lowercase
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
    }

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {                  // Convert character to lowercase
            str[i] = str[i] + 32;
        }

        if (str[i] == ch) {
            count++;
        }
    }

    printf("The character '%c' occurs %d times in the string.\n", ch, count);

    return 0;
}
