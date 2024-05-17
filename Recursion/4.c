#include <stdio.h>

int countDigits(int number) {
    if (number == 0) {
        return 0;
    } else {
        return 1 + countDigits(number / 10);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Number of digits in %d is: %d\n", num, countDigits(num));
    return 0;
}

