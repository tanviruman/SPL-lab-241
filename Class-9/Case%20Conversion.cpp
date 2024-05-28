#include<stdio.h>
int main()
{
    /**
    Upper -> Lower
    char ch = 'E';
    ch = ch - 'A' + 'a';
    printf("%c\n", ch);

    Lower -> Upper
    char ch = 'e';
    ch = ch - 'a' + 'A';
    printf("%c\n", ch);
    **/


    char str[50];

    gets(str);

    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            /// upper case
            str[i] = str[i] - 'A' + 'a';
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            /// lower case
            str[i] = str[i] - 'a' + 'A';
        }
    }

    puts(str);
}