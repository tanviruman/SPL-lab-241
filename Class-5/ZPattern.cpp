#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int space = n-2;
    for(int i=1; i<=n; i++)
    {
        if(i==1 || i==n) /// for the first and last row
        {
            for(int j=1; j<=n; j++)
                printf("Z");
        }
        else
        {
            for(int j=1; j<=space; j++)
                printf(" ");
            printf("Z");

            space--;
        }

        printf("\n");
    }
    return 0;
}