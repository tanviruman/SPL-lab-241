#include <stdio.h>
int main() {
    int n, i;
    printf("Enter array size: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    printf("Reverse order:\n");

    for (i = n - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }
    return 0;
}
