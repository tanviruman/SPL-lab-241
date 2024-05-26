#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int currentValue = 10;
    int incr = 10;

    int sum = 0;

    for(int i = 1; i<=n; i = i + 1)
    {
        sum = sum + currentValue;
			currentValue *= incr;
    }


    printf("%d", sum);

    return 0;
}