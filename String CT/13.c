#include <stdio.h>

int main() {
    char str[100];
    int i, j, k;
    printf("Enter a string: ");
    gets(str);

    // Removing repeated characters
    for (i = 0; str[i] != '\0'; i++) {
        for (j = i + 1; str[j] != '\0';) {
            if (str[j] == str[i]) {
                // Shift remaining characters to the left
                for (k = j; str[k] != '\0'; k++) {
                    str[k] = str[k + 1];
                }
            } else {
                j++;
            }
        }
    }

    // Printing the string with repeated characters removed
    printf("String with repeated characters removed: %s\n", str);

    return 0;
}
