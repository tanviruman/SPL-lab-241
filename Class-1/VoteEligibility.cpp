#include<stdio.h>
int main()
{
    int age;
    scanf("%d", &age);
    if(age>=0)
    {
        /// valid part
        if(age>=18)
        {
            printf("ELIGIBLE\n");
        }
        else
        {
            printf("NOT ELIGIBLE\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
    return 0;
}
