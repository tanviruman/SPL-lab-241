#include <stdio.h>

void printEvenOrOdd(int start, int end) {
    if (start > end) {
        return;
    } else {
        printf("%d is %s\n", start, (start % 2 == 0) ? "even" : "odd");
        printEvenOrOdd(start + 1, end);
    }
}

int main() {
    int start, end;

    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Even or odd numbers in the range %d to %d:\n", start, end);
    printEvenOrOdd(start, end);

    return 0;
}

