#include <stdio.h>
int main() {
int number, reverse = 0;
printf("Enter the Number: ");
scanf("%d", &number);

while (number != 0) {
int digit = number % 10;
reverse = reverse * 10 + digit;
number = number /10;
}

printf("Reverse: %d\n", reverse);
return 0;
}
