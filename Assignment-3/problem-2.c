#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        sum =sum + array[i];
    }
    printf("Sum of the integers: %d\n", sum);

    return 0;
}

