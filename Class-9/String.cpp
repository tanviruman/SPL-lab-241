#include<stdio.h>
int main()
{
    char str[52];

    gets(str);

    for(int i=0; str[i]!='\0'; i++)
    {
        printf("%c", str[i]);
    }
    return 0;
}