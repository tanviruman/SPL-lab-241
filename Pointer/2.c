#include <stdio.h>

int main() {
    int num1, num2, sum;
    int *ptr1 = &num1, *ptr2 = &num2;


    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (*ptr1 > *ptr2) {
        printf("Maximum number: %d\n", *ptr1);
    } else {
        printf("Maximum number: %d\n", *ptr2);
    }

    return 0;
}
