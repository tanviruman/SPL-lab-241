#include <stdio.h>
int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++) {
        if (row % 2 == 1) {
            for (int col = 1; col <= n; col++) {
                printf("*");
            }
        } else {
            printf("*");
            for (int col = 2; col < n; col++) {
                printf("_");
            }
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
