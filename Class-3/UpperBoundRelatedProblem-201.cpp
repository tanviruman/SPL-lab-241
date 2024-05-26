#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int starting = 2;
    int upperBound = n;
    int incr = 2;

    int sum = 0;

    for(int i = starting; i<=upperBound; i = i + incr)
    {
        sum = sum + i;
    }

    printf("%d\n", sum);

    return 0;
}