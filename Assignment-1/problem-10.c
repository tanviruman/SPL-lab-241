#include <stdio.h>

int main() {
int N, i, number;
int sum = 0;
printf("Enter the value of N: ");
scanf("%d", &N);

for (i = 1; i <= N; i++) {
if (i % 2 == 0) {
number = -i;
printf("%d,",number);
}
else {
number = i;
printf("%d,",number);
}

sum += number;

/*if(i!=number){
printf(",");}*/
}

printf("\nRESULT OF FIRST %dth TERMS: %d\n", N, sum);
return 0;
}
