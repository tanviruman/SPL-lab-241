#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);


    /// first half
    int firstHalfRow = (n/2) + 1;

    int underscore = firstHalfRow-1;
    int star = 1;

    for(int i=1; i<=firstHalfRow; i++)
    {
        for(int j=1; j<=underscore; j++)
            printf("_");

        for(int j=1; j<=star; j++)
            printf("*");

        printf("\n");
        /// preparing for the next row
        underscore--;
        star+=2;
    }



    /// second half

    int secondHalfRow = (n/2);
    underscore = 1;
    star = n - 2;

    for(int i=1; i<=secondHalfRow; i++)
    {
        for(int j=1; j<=underscore; j++)
            printf("_");

        for(int j=1; j<=star; j++)
            printf("*");

        printf("\n");
        /// preparing for the next row
        underscore++;
        star-=2;
    }
}