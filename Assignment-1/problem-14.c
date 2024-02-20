#include <stdio.h>
int main() {
int n, r, numerator = 1, denominator_r = 1, denominator_nr = 1;
float result;

printf("Enter the value of n: ");
scanf("%d", &n);
printf("Enter the value of r: ");
scanf("%d", &r);

for (int i = 1; i <= n; i++) {
numerator *= i;
}

for (int i = 1; i <= r; i++) {
denominator_r *= i;
}

for (int i = 1; i <= (n - r); i++) {
denominator_nr *= i;
}

result = numerator / (denominator_r * denominator_nr);
printf("%0.1f\n", result);

return 0;
}
