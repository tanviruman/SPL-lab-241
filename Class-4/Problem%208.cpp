#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int reversedNumber = 0;

    int counterRightSideZeros = 0;

    bool flag = true;

    while(n!=0)
    {
        int lastDigit = n%10;

        if(flag==true)
        {
            if(lastDigit==0)
                counterRightSideZeros++;
            else
                flag = false;
        }

        // printf("%d", lastDigit);

        reversedNumber = (reversedNumber*10) + lastDigit;
        n = n/10;
    }

    for(int i=1; i<=counterRightSideZeros; i++)
        printf("0");
    printf("%d\n", reversedNumber);
    return 0;
}