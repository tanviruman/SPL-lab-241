#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int array[n];

    printf("Enter the elements of the array:\n ");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    int max = array[0], min = array[0], max_index = 0, min_index = 0;

    for (i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
            max_index = i;
        }
        if (array[i] < min) {
            min = array[i];
            min_index = i;
        }
    }

    printf("Max: %d, Index: %d\n", max, max_index);
    printf("Min: %d, Index: %d\n", min, min_index);

    return 0;
}
