#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    int sum = 0;
    for (i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sum = sum + array[i];
        }
    }
    printf("Sum of even integers of array: %d\n", sum);
    return 0;
}
