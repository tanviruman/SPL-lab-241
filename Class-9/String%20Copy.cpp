#include<stdio.h>
int main()
{
    char str1[50];
    gets(str1);

    char str2[50] = {'\0'};
    for(int i=0; str1[i]!='\0'; i++)
    {
        str2[i] = str1[i];
    }
    printf("%s\t%s\n", str1, str2);
    return 0;
}