#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int A[n], uniqueArray[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    int uniqueCount = 0;
    for (i = 0; i < n; i++) {
        int isDuplicate = 0;
        for (j = 0; j < uniqueCount; j++) {
            if (A[i] == uniqueArray[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            uniqueArray[uniqueCount++] = A[i];
        }
    }
    printf("Array A after removing duplicates: ");
    for (i = 0; i < uniqueCount; i++) {
        printf("%d ", uniqueArray[i]);
    }
    printf("\n");
    return 0;
}
