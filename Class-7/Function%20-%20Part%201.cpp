#include<stdio.h>
int add2(int a, int b)
{
    int result = a + b;
    return result;
}


int add1(int a)
{
    a += 1;
    return a;
}

int main()
{
    int x = 5;
    int y = 6;
    int res = add2(x, y);


    int z = 10;
    add1(z);
    printf("%d\n", z);
    return 0;
}