#include <stdio.h>
int main()
{
int N, i, result = 0, number = 0;
printf("Enter the value of N: ");
scanf("%d", &N);

for (i = 1; i <= N; i++) {
int num=(i + 1);
number = i * i * num ;
printf("%d^2.%d + ",i,num);
result += number;
}

printf("\nResult of first %d terms: %d\n", N, result);
return 0;
}
