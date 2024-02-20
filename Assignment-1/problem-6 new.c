#include <stdio.h>

int main() {
int X, N, Guess, Tries_left;
printf("Enter the number given by Player-1: ");
scanf("%d", &X);
printf("Enter the number of tries given for Player-2: ");
scanf("%d", &N);
Tries_left = N;

while (Tries_left > 0) {
printf("Enter your Guess: ");
scanf("%d", &Guess);

if (Guess == X) {
printf("Right, Player-2 wins!\n");
break;
} else {
Tries_left--;
printf("Wrong, %d Choice(s) Left!\n", Tries_left);
}
}

if (Tries_left == 0) {
printf("Player-1 wins!\n");
}

return 0;
}
