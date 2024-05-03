#include <stdio.h>
int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Enter an odd integer");
        return 1;
    }

    int mid = n / 2;

    for (int i = 0; i < n; i++) {
        int st, sp;
        if (i <= mid) {
            st = i * 2 + 1;
            sp = mid - i;
        } else {
            st = (n - i) * 2 - 1;
            sp = i - mid;
        }
        for (int j = 0; j < sp; j++) {
            printf("_");
        }

        for (int j = 0; j < st; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
