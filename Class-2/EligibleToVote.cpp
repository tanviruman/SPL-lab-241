#include<stdio.h>
int main()
{
    int age;
    scanf("%d", &age);

    int isValid = (age>0);

    switch(isValid)
    {
    case 1:
        {
            /// valid input
            int isEligible = (age>=18);
            switch(isEligible)
            {
            case 1:
                {
                    printf("Eligible\n");
                    break;
                }
            default:
                {
                    printf("Not Eligible\n");
                }
            }
            break;
        }
    default:
        {
            printf("Invalid input\n");
        }
    }
    return 0;
}