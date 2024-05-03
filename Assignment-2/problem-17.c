#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter an odd integer: ");
    scanf("%d", &n);

    int mid = n / 2;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if ( row >= mid)
            {
                if (row == mid || col == mid)
                {
                    printf("$");
                }
                else if (abs(row - col) == mid || row + col == n - 1 + mid)
                {
                    printf("$");
                }
                else
                {
                    printf("_");
                }
            }
            else
            {
                if (row == mid || col == mid)
                {
                    printf("$");
                }
                else if (abs(row - col) == mid || row + col == mid)
                {
                    printf("$");
                }
                else
                {
                        printf("_");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
