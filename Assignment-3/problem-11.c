#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int A[n], B[n];
    printf("Enter the elements for array A: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    printf("Array A:");
    for (i = 0; i < n; i++) {
        printf(" %d", A[i]);
        B[n - i - 1] = A[i];
    }
    printf("\n");
    printf("Array B:");
    for (i = 0; i < n; i++) {
        printf(" %d", B[i]);
    }
    printf("\n");
    return 0;
}
