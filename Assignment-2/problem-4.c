#include <stdio.h>
int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    for (int row = 1; row <= n; row++) {

        for (int bspace = 1; bspace <= n - row; bspace++) {
            printf("_");
        }


        for (int col = 1; col <= row; col++) {
            printf("%d", row);
        }

        printf("\n");
    }

    return 0;
}
