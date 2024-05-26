#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = 1;
    int underscore = n - 1;
    for(int i=1; i<=n; i++)
    {
        /// printing underscore
        for(int j=1; j<=underscore; j++)
        {
            printf("_ ");
        }

        /// printing star
        for(int j=1; j<=star; j++)
        {
            printf("* ");
        }





        printf("\n");

        /// preparing for the next row
        star += 1;
        underscore -= 1;
    }
    return 0;
}
