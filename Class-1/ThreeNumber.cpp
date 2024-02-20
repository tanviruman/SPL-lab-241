#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    int maximum = a;

    if(b>maximum)
        maximum = b;

    if(c>maximum)
        maximum = c;

    printf("%d", maximum);


    return 0;
}
