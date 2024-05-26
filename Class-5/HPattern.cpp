#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    int space = n - 2;

    int middleRow = (n/2) + 1;
    for(int i=1; i<=n; i++)
    {
        if(i==middleRow)
        {
            for(int j=1; j<=n; j++)
                {
                    printf("H");
                }
        }
        else
        {
            printf("H");
            for(int j=1; j<=space; j++)
                {
                    printf(" ");
                }
            printf("H");
        }

        printf("\n");
    }
    return 0;
}