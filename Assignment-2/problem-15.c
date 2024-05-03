#include <stdio.h>
int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= n; col++) {
            if (row == 1 || row == n ||  col == n - row + 1) {
                printf("Z");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
