#include<stdio.h>
int main()
{
    int a = 5;
    int b = 2;

    int sum = a + b;
    int sub = a - b;
    int mlpt = a * b;
    double div = (double) a / b;
    int rem = a % b;

    printf("%d %d %d %0.2lf %d\n", sum, sub, mlpt, div, rem);
    return 0;
}