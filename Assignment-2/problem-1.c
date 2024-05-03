#include <stdio.h>
int main() {
int n;
printf("Enter N: ");
scanf("%d", &n);
for (int row = 1; row <= n; row++) {
for (int col = 1; col <= n; col++) {
printf("%d", col);
}
printf("\n");
}

return 0;
}
