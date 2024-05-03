#include <stdio.h>
int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= row; col++) {
            printf("%d", col);
        }

        for (int col = 1; col < 2*(n - row); col++) {
            printf("_");
        }

        if (row == n)
        {
            for (int col = row - 1; col >= 1; col--) {
                printf("%d", col);
            }
        }
        else
        {
            for (int col = row; col >= 1; col--) {
                printf("%d", col);
            }
        }

        printf("\n");
    }

    return 0;
}
