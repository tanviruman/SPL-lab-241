#include<stdio.h>
int main()
{
    int day;
    scanf("%d", &day);
    switch(day)
    {
    case 1:
        {
            printf("Saturday\n");
            break;
        }
    case 2:
        {
            printf("Sunday\n");
            break;
        }
    case 3:
        {
            printf("Monday\n");
        }
    case 4:
        {
            printf("Tuesday\n");
        }
    case 5:
        {
            printf("Wednesday\n");
            break;
        }
    case 6:
        {
            printf("Thursday\n");
            break;
        }
    case 7:
        {
            printf("Friday\n");
            break;
        }
    default:
        {
            printf("Invalid Input\n");
        }
    }
    printf("Life is Good\n");
    return 0;
}
