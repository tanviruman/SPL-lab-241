#include <stdio.h>

int main() {
    int n, position, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int array[n];

    printf("Enter %d elements for the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the position: ");
    scanf("%d", &position);

    if (position >= 0 && position < n) {
        for (i = position; i < n - 1; i++) {
            array[i] = array[i + 1];
        }
        n--;

        printf("Array after deletion:");
        for (i = 0; i < n; i++) {
            printf(" %d", array[i]);
        }
        printf("\n");
    } else {
        printf("Invalid position!\n");
    }

    return 0;
}
