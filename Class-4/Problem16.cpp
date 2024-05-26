#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    int minimum = (a<b ? a : b);

    int gcd = 1;
    for(int i=minimum; i>=2; i--)
    {
        if(a%i==0 && b%i==0)
        {
            gcd = i;
            break;
        }
    }

    int lcm = (a*b)/gcd;


    printf("GCD: %d\nLCM: %d\n", gcd, lcm);

    main();
    return 0;
}