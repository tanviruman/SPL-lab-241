#include <stdio.h>
int main() {
    int n, m, i, j;
    printf("Enter the size of array A: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter the elements of array A: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    printf("Enter the size of array B: ");
    scanf("%d", &m);
    int B[m];
    printf("Enter the elements of array B: ");
    for (i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }
    int hasIntersection = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (A[i] == B[j]) {
                printf("%d ", A[i]);
                hasIntersection = 1;
                break;
            }
        }
    }
    if (!hasIntersection) {
        printf("Empty set");
    }
    printf("\n");

    return 0;
}

