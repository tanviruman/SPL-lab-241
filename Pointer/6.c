#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    char *ptr = str;
    int vowels = 0, consonants = 0;

    while (*ptr != '\0') {
        char ch = *ptr;
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }

        ptr++;
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
