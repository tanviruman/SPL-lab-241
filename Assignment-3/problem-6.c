#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int first_array[n];
    int second_array[n];
    int sum[n];

    printf("Enter %d elements for the first array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &first_array[i]);
    }

    printf("Enter %d elements for the second array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &second_array[i]);
    }

    for (int i = 0; i < n; i++) {
        sum[i] = first_array[i] + second_array[i];
    }
    printf("Sum :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", sum[i]);
    }
    return 0;
}
