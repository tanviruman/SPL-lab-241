#include <stdio.h>
int main() {
int num1, num2;
int newNUM1,newNUM2;
int GCD, LCM;

printf("Enter the first number: ");
scanf("%d", &num1);
printf("Enter the second number: ");
scanf("%d", &num2);

newNUM1 = num1;
newNUM2 = num2;

while (num2 != 0) {
int temp = num2;
num2 = num1 % num2;
num1 = temp;
}
GCD = num1;

LCM = (newNUM1 *newNUM2) / GCD;

printf("GCD of %d and %d is: %d\n", newNUM1,newNUM2, GCD);
printf("LCM of %d and %d is: %d\n", newNUM1,newNUM2, LCM);

return 0;
}
