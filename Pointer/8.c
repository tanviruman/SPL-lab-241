#include <stdio.h>

int main() {
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr + n - 1;

    printf("Array elements in reverse order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *ptr);
        ptr--;
    }

    printf("\n");

    return 0;
}
