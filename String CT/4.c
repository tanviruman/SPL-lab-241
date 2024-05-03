#include <stdio.h>

int main() {
    char str[100];

    int wordCount = 0, i;
    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0')) {
            wordCount++;
        }
    }

    printf("Number of words in the string: %d\n", wordCount);
    return 0;
}
