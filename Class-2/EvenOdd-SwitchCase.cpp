#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int remainder = (a % 2);

    switch(remainder)
    {
        case 0:
            {
                printf("Even\n");
                break;
            }
        default:
            {
                printf("Odd\n");
            }
    }
    main();
    return 0;
}