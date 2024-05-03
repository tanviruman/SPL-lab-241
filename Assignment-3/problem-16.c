
#include <stdio.h>

int main() {
    int n, i;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Declare an array with the given size
    int A[n];

    // Input elements for the array
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    // Replace elements at odd indexes with 0
    for (i = 1; i < n; i += 2) {
        A[i] = 0;
    }

    // Display the array after replacement
    printf("Array A after replacing: ");
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
