#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int prod = 1;

    printf("%d! = ", n);

    for(int i=n; i>=1; i=i-1)
    {
        prod = prod * i;

        printf("%d ", i);

        if(i!=1) printf("X ");
    }

    printf("= %d\n", prod);
    return 0;
}