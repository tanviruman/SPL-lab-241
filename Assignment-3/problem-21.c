#include <stdio.h>
int main() {
    int n, m, i, j;
    printf("Enter the size of array A: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter %d integers for array A:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    printf("Enter the size of array B: ");
    scanf("%d", &m);
    int B[m];
    printf("Enter %d positive integers for array B:\n", m);
    for (i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }
    int diffSize = 0;
    int diff[n];
    for (i = 0; i < n; i++) {
        int found = 0;
        for (j = 0; j < m; j++) {
            if (A[i] == B[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            diff[diffSize] = A[i];
            diffSize++;
        }
    }

    printf("Difference (A - B):\n");
    for (i = 0; i < diffSize; i++) {
        printf("%d ", diff[i]);
    }

    return 0;
}
