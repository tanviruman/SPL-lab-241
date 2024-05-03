#include <stdio.h>
int main() {
    int n, m, i, j;

    printf("Enter the size of array A: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter %d elements for array A:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    printf("Enter the size of array B: ");
    scanf("%d", &m);
    int B[m];
    printf("Enter %d positive elements for array B:\n", m);
    for (i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }
    int C[n + m];
    for (i = 0; i < n; i++) {
        C[i] = A[i];
    }
    int unionSize = n;
    for (i = 0; i < m; i++) {
        int found = 0;
        for (j = 0; j < n; j++) {
            if (B[i] == A[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            C[unionSize] = B[i];
            unionSize++;
        }
    }
    printf("Union of array A and array B:\n");
    for (i = 0; i < unionSize; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
