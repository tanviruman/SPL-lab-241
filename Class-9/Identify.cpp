#include<stdio.h>
int main()
{
    char str[100];

    gets(str);

    int upperCase = 0;
    int lowerCase = 0;
    int digit = 0;
    int specialCharacter = 0;

    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            upperCase++;
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            lowerCase++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else
        {
            specialCharacter++;
        }
    }

    printf("Upper: %d\tLower: %d\tDigit: %d\tSpecial Character: %d\n", upperCase, lowerCase, digit, specialCharacter);
    return 0;
}