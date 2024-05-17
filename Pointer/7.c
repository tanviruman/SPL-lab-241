#include <stdio.h>

int main() {
    int n, i, sum =0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;

    for (int i = 0; i < n; i++) {
        sum += *ptr;
        ptr++;
    }

    printf("Sum of elements of the array: %d\n", sum);

    return 0;
}
