#include <stdio.h>

int main() {
int num, newnum, remainder, reverse = 0;

printf("Enter an integer: ");
scanf("%d", &num);
newnum = num;

while (num != 0) {
remainder = num % 10;
reverse = reverse * 10 + remainder;
num = num/10;
}

if (newnum == reverse) {
printf("Palindrome");
}
else {
printf("Not palindrome");
}

return 0;
}
