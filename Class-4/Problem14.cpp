
#include<stdio.h>

int factorial(int n)
{
    int prod = 1;

    for(int i=n; i>=1; i=i-1)
    {
        prod = prod * i;
    }
    return prod;
}


int main()
{
    int n, r;
    scanf("%d%d", &n, &r);

    int a = n;
    int b = r;
    int c = (n-r);

    int factorialOfA = factorial(a);
    int factorialOfB = factorial(b);
    int factorialOfC = factorial(c);

    int denom = factorialOfB * factorialOfC;

    double finalResult = (double)factorialOfA/denom;
    printf("%lf\n", finalResult);

    return 0;
}