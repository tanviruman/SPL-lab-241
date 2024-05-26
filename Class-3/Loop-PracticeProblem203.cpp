#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int counter=1; counter<=n; counter = counter + 1)
    {
        if(counter%2==0)
            printf("0");
        else
            printf("1");

        if(counter!=n) printf(", ");
    }
    printf("\n");
    return 0;
}