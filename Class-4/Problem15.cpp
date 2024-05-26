#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    int result = 1;
    for(int i=1; i<=b; i++)
    {
        result = result * a;
    }
    printf("%d\n", result);

    return 0;
}