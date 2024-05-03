#include <stdio.h>
int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (row == n / 2 || col == 0 || col == n-1) {
                printf("H ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
