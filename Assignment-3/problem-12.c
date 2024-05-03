#include <stdio.h>
int main() {
    int n, position, number;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    printf("Enter the number to insert: ");
    scanf("%d", &number);
    printf("Enter the position to insert: ");
    scanf("%d", &position);
    for (int i = n - 1; i >= position; i--) {
        array[i + 1] = array[i];
    }


    array[position] = number;

    printf("Array after insertion:\n");
    for (int i = 0; i < n + 1; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
