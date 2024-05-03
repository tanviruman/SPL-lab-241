#include <stdio.h>

int main() {
    char str[100];
    int sum = 0, i;

    printf("Enter a string: ");
    gets(str);

    // Adding the digits in the string
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            sum = sum + (str[i] - '0');
        }
    }
    printf("Sum of digits in the string: %d\n", sum);

    return 0;
}

