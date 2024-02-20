#include <stdio.h>
int main() {
int x, y;
printf("Enter the value of x: ");
scanf("%d", &x);
printf("Enter the value of y: ");
scanf("%d", &y);
int result = 1;
for (int i = 1; i <= y; i++) {
result=result*x;
}
printf("Answer:%d\n", result);
return 0;
}
