#include <stdio.h>

int main()
{
    int row, column, input;
   printf("\n");

    scanf("%d", &input);
    if (input % 2 == 1)
    {
        for (row = 1; row <= input; row++)
        {
            for (column = 1; column <= input; column+2)
            {
                if (row == 1 || row == input / 2+ 1 || row == input || column == 1)
                {
                    printf("E");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("Invalid Input.\nEnter an Odd Number.\n");
    }

    printf("\n");

        if (input % 2 == 1)
    {
        for (row = 1; row <= input; row++)
        {
            for (column = 1; column <= input; column++)
            {
                if (column == 1 || column == input || (row <= input / 2 + 1 && row == column) || (row <= input / 2 + 1 && row + column == input + 1))
                {
                    printf(" M");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("Invalid Input.\nEnter an Odd Number.\n");
    }
    printf("\n");


    if (input % 2 == 1)
    {
        for (row = 1; row <= input; row++)
        {
            for (column = 1; column <= input; column++)
            {
                if (column == 1 || column == input || (row <= input / 2 + 1 && row == column) || (row <= input / 2 + 1 && row + column == input + 1))
                {
                    printf(" M");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("Invalid Input.\nEnter an Odd Number.\n");
    }

       printf("\n");

int  height = 6;
int width = 10 ; ///(2 * height) - 1;
     for (row = 0; row < height; row++) {
        for (column = 0; column <= width; column++) {
            if (column == input || column == (width - input)
                || (row == height / 2 && column > input
                    && column < (width - input)))
                printf("A");
            else
                printf(" ");
        }
        printf("\n");
        input--;
    }

       printf("\n");
    return 0;
}



