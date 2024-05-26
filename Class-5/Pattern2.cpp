#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);


    /// upper half
    int underscore = 0;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=underscore; j++)
            printf("_ ");
        printf("* ");
        printf("\n");

        /// preparing for the next row
        underscore++;
    }


    /// lower half
    underscore = n-2;
    for(int i=1; i<=n-1; i++)
    {
        for(int j=1; j<=underscore; j++)
        {
            printf("_ ");
        }
        printf("* ");
        printf("\n");


        /// preparing for the next row
        underscore--;
    }
    return 0;
}