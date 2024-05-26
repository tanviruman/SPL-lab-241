#include<stdio.h>
int main()
{
    int year;
    scanf("%d", &year);
    for(int counter = year; ; counter = counter + 1)
    {
        if((counter%400==0) || (counter%4==0 && counter%100!=0))
        {
            printf("%d\n", counter);
            break;
        }
    }
    return 0;
}