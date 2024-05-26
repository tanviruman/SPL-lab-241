#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int sign = 1;

    for(int i=1; i<=n; i++)
    {
        printf("%d ", i*sign);

        sign = sign * -1;
    }
    return 0;
}